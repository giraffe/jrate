// ************************************************************************
//    $Id: RealtimeThread.cc 527 2005-04-01 21:28:33Z mdeters $
// ************************************************************************

#include <sys/time.h>
#include <java/lang/Thread.h>
#include <java-threads.h>
#include <sched.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include <gcj/cni.h>

#include <jrate/jRate.h>
#include <jrate/binding/java/Types.h>

#include <java/lang/IllegalThreadStateException.h>
#include <java/lang/String.h>
#include <java/lang/Runnable.h>

#include <javax/realtime/RealtimeThread.h>
#include <javax/realtime/SchedulingParameters.h>
#include <javax/realtime/Scheduler.h>
#include <javax/realtime/PriorityParameters.h>
#include <javax/realtime/AbsoluteTime.h>
#include <javax/realtime/RelativeTime.h>
#include <javax/realtime/PeriodicParameters.h>
#include <javax/realtime/RealtimeClock.h>
#include <javax/realtime/InaccessibleAreaException.h>
#include <java/lang/natThread.h>

#include <jrate/sys/ISignalHandler.h>
#include <jrate/sys/SignalManager.h>

class RTThreadTimeoutHandler : public jrate::sys::ISignalHandler {

public:
    RTThreadTimeoutHandler(int id,
                           javax::realtime::RealtimeThread* rtThread)
        : pipeID_(id),
        rtThread_(rtThread)
        { }
    virtual ~RTThreadTimeoutHandler() {}
    
public:
    virtual void handleSignal(int) {
        char ch = 'T';

        if (__builtin_expect(rtThread_->releaseParameterChanged, false)) {
            rtThread_->releaseParameterChanged = false;
            setitimer(ITIMER_REAL, &tval_, 0);
        }

        if (rtThread_->isWaitingForNextPeriod() == false) {
            rtThread_->handleDeadlineMiss();
        }
        else {
            write(pipeID_, &ch, 1);
            rtThread_->setWaitingForNextPeriod(false);
        }
                    
    }

    void registerHandler(size_t sec, size_t usec) {
        jrate::sys::SignalManager::registerSignalHandler(SIGALRM, this);
        itimerval tval;
        
        tval.it_value.tv_sec = sec;
        tval.it_value.tv_usec = usec;
        
        tval.it_interval.tv_sec = sec;
        tval.it_interval.tv_usec = usec; 
        
        int retVal = setitimer(ITIMER_REAL, &tval, 0);
        if (retVal != 0) {
            perror("setitimer");
            exit(retVal);
        } 
        
    }

    void updateTimerParameters(size_t sec, size_t usec) {
        tval_.it_value.tv_sec = sec;
        tval_.it_value.tv_usec = usec;
        
        tval_.it_interval.tv_sec = sec;
        tval_.it_interval.tv_usec = usec; 
    }
    
private:
    int pipeID_;
    javax::realtime::RealtimeThread* rtThread_;
    itimerval tval_;
};


/** This class establishes a new ScopeStack for a RealtimeThread
 *  in its constructor, then re-establishes the old one in its
 *  destructor.  On destruction, ScopeStackGuard deletes the "new"
 *  ScopeStack provided to it in the constructor.  See
 *  RealtimeThread::executeInMemoryArea() for an example of use. */
class ScopeStackGuard {

public:
    /** Construct a new ScopeStackGuard with the given RealtimeThhread,
     *  old ScopeStack, and new ScopeStack. */
    ScopeStackGuard(javax::realtime::RealtimeThread* thisRTT,
                    jrate::binding::java::ScopeStack_t* thisSS,
                    jrate::binding::java::ScopeStack_t* newSS)
        : thisRTT_(thisRTT), thisSS_(thisSS), newSS_(newSS) {
        /* give the thread the new scope stack and put it in TSS */
        thisRTT_->scopeStack = (gnu::gcj::RawData*)newSS_;
        newSS_->initTSS();
    }

    /** Re-establish the old ScopeStack */
    ~ScopeStackGuard() {
        /* give the thread the old ScopeStack and put it in TSS */
        thisRTT_->scopeStack = (gnu::gcj::RawData*)thisSS_;
        thisSS_->initTSS();
        /* delete the one that we exited */
        delete newSS_;
    }

private:
    /** The RealtimeThread we're operating on behalf of */
    javax::realtime::RealtimeThread    *thisRTT_;
    /** The "old" ScopeStack (the current one when constructed) */
    jrate::binding::java::ScopeStack_t *thisSS_;
    /** The "new" ScopeStack (the one we transition to temporarily) */
    jrate::binding::java::ScopeStack_t *newSS_;
};


void
javax::realtime::RealtimeThread::setupTSS() {
    ((jrate::binding::java::ScopeStack_t *)this->scopeStack)->initTSS();
}

void
javax::realtime::RealtimeThread::start() {
    JvSynchronize sync(this);
    this->hasStarted = true; 

    // Its illegal to re-start() a thread, even if its dead.
    if (!startable_flag)
        throw new java::lang::IllegalThreadStateException;


    if (!this->validateSchedulingParameters()) {
        // This exception is not appropriate for the problem
        // outlined, but the spec. does not describe when or
        // if the scheduling parameters should be checked for
        // compability with the given scheduler.
        throw new java::lang::IllegalThreadStateException;
    
    }

    this->scheduler->notifyThreadStart(this);
    alive_flag = true;
    startable_flag = false;
    natThread *nt = (natThread *) this->data;
    JRATE_LOG(("[jRate<RealtimeThread::start>]: Creating RealtimeThread\n"));
    _Jv_RealtimeThreadStart(this, nt->thread, (_Jv_ThreadStartFunc *) &_Jv_ThreadRun);
    JRATE_LOG(("[jRate<RealtimeThread::start>]: Exiting\n"));
}

void
javax::realtime::RealtimeThread::yield() {
    sched_yield();
}


///////////////////////////////////////////////////////////////////////////
//
// jrate::binding::java::ScopeStack_t related methods
//

void
javax::realtime::RealtimeThread::initScopeStack(::gnu::gcj::RawData *pss) {
    JRATE_LOG(("[jRate<RealtimeThread::initScopeStack>]: Called\n"));
    jrate::binding::java::ScopeStack_t *tmp = (jrate::binding::java::ScopeStack_t *)pss;
    jrate::binding::java::ScopeStack_t *ss = new jrate::binding::java::ScopeStack_t(*tmp);
    this->scopeStack = (gnu::gcj::RawData *)ss;
}

void
javax::realtime::RealtimeThread::initScopeStack(::javax::realtime::MemoryArea *ma) {
    JRATE_LOG(("[jRate<RealtimeThread::initScopeStack>]: Called %p\n", ma)); 
    jrate::binding::java::ScopeStack_t *ss =
        new jrate::binding::java::ScopeStack_t(MEM_AREA(ma));
    this->scopeStack = (gnu::gcj::RawData *)ss;
    
}

jboolean
javax::realtime::RealtimeThread::setTopMemoryArea(::javax::realtime::MemoryArea* ma) {
    jrate::binding::java::ScopeStack_t *ss =
        (jrate::binding::java::ScopeStack_t *)this->scopeStack;
    return ss->setTopMemoryArea(MEM_AREA(ma));
}

void
javax::realtime::RealtimeThread::finiScopeStack () {
    jrate::binding::java::ScopeStack_t *ss =
        (jrate::binding::java::ScopeStack_t *)this->scopeStack;
    delete ss;
}

jboolean
javax::realtime::RealtimeThread::pushMemoryArea (::javax::realtime::MemoryArea *ma) {
    return ((jrate::binding::java::ScopeStack_t *)this->scopeStack)->push(MEM_AREA(ma));
}

javax::realtime::MemoryArea *
javax::realtime::RealtimeThread::popMemoryArea (){
    javax::realtime::MemoryArea * ma =
        ((jrate::binding::java::ScopeStack_t *)this->scopeStack)->pop()->getPeer();
    return ma;
}  

jboolean
javax::realtime::RealtimeThread::executeInMemoryArea(javax::realtime::MemoryArea* ma,
                                                     java::lang::Runnable* logic)
{
    jrate::binding::java::ScopeStack_t* newSS = 0;
    ::jrate::binding::java::IMemoryArea_t* memArea = MEM_AREA(ma);
    jrate::binding::java::ScopeStack_t * thisSS =
        (jrate::binding::java::ScopeStack_t*)this->scopeStack;
    
    if (memArea->typeID() & jrate::mem::PRIMORDIAL_MEMORY) {
        // Setup a new scope stack that holds only the current memory
        // area. Then once the execution is over reset the new scope
        // stack
        newSS = new jrate::binding::java::ScopeStack_t(memArea);
    }
    else {
        newSS = thisSS->createExecuteInAreaScopeStack(memArea);

        if(newSS == 0)
          throw new javax::realtime::InaccessibleAreaException(JvNewStringLatin1("Must have already entered a memory area to call executeInArea() on it"));
    }

    // Here's the deal with the guard: even if logic->run() throws
    // an exception, we still need to re-establish "thisSS" as the
    // current ScopeStack of this thread, put it in TSS, and
    // delete newSS.  The destructor of the ScopeStackGuard does
    // this for us.
    ScopeStackGuard _g(this, thisSS, newSS);

    logic->run();

    return true;
}
javax::realtime::MemoryArea *
javax::realtime::RealtimeThread::getOuterMemoryArea_(jint index) {
    ::jrate::binding::java::ScopeStack_t* ss =
          (::jrate::binding::java::ScopeStack_t *)this->scopeStack;
    
    return (ss->getOuterMemoryArea(index) != 0)
        ? ss->getOuterMemoryArea(index)->getPeer()
        : 0; 
}

jint
javax::realtime::RealtimeThread::getInitialMemoryAreaIndex_() {
    ::jrate::binding::java::ScopeStack_t* ss =
          (::jrate::binding::java::ScopeStack_t *)this->scopeStack;
    return ss->getInitialMAIndex();
}

jint
javax::realtime::RealtimeThread::getMemoryAreaStackDepth_() {
    return ((jrate::binding::java::ScopeStack_t *)this->scopeStack)->depth();
}

javax::realtime::MemoryArea *
javax::realtime::RealtimeThread::getActiveMemoryArea() {
    ::jrate::binding::java::ScopeStack_t* ss =
          (::jrate::binding::java::ScopeStack_t *)this->scopeStack;
    return ss->top()->getPeer();
}

jboolean
javax::realtime::RealtimeThread::waitForNextPeriod_() {
    int pid = ((int*)this->pipeID_)[0];
    char ch;
    read(pid, &ch, 1); 
    return true;
}

void
javax::realtime::RealtimeThread::sleep(javax::realtime::Clock*,
                                       javax::realtime::AbsoluteTime* time)
{
    // Currently we Ignore the Clock
    sleep(time);
}

void
javax::realtime::RealtimeThread::sleep(javax::realtime::Clock*,
                                       javax::realtime::RelativeTime* time)
{
    sleep(time);
}


void
javax::realtime::RealtimeThread::sleep(javax::realtime::AbsoluteTime* time)
{
    // TODO: Right now we are taking the assumption that the default
    // clock is implemented with gettimeofday and in order to avoid
    // the allocations of any Java time object, we take advantage of
    // this fact. We should also have C++ peers for these classes.
    timeval now;
    gettimeofday(&now, 0);
    
    struct timespec sleepTime;
    struct timespec leftOver;

    sleepTime.tv_sec = (time->getMilliseconds()/1000) - now.tv_sec;
    sleepTime.tv_nsec =
        (now.tv_usec
         - ((time->getMilliseconds()-(time->getMilliseconds()/1000))*1000)
         - (time->getNanoseconds()/1000)) * 1000;

    if (sleepTime.tv_sec <=0 || sleepTime.tv_nsec <= 0)
        return;

    nanosleep(&sleepTime, &leftOver); 
    while (leftOver.tv_sec != 0 && leftOver.tv_nsec != 0) {
        nanosleep(&leftOver, &leftOver);
    }
    
}

void
javax::realtime::RealtimeThread::sleep(javax::realtime::RelativeTime* time)
{
    struct timespec sleepTime;
    struct timespec leftOver;
    // TODO: Take into account the overhead of getting up to this
    // point.
    sleepTime.tv_sec = time->getMilliseconds()/1000;
    sleepTime.tv_nsec =
        time->getNanoseconds()
        + (time->getMilliseconds() - (sleepTime.tv_sec*1000))*1000000;

    nanosleep(&sleepTime, &leftOver);
}

void
javax::realtime::RealtimeThread::setupTimeoutHandler() {
    // Let's set the first timeot to the start parameter if it is not
    // zero. Otherwise we set it up to the period.
    jlong sec;
    jlong usec;
    bool updateReleaseParams = true;
    javax::realtime::PeriodicParameters* pp =
        (javax::realtime::PeriodicParameters*)this->getReleaseParameters();
    
    javax::realtime::RelativeTime* period =
        pp->getStart(javax::realtime::RealtimeClock::instance());

    if (period->getMilliseconds() == 0 && period->getNanoseconds() == 0 ) {
        updateReleaseParams = false;
        period = this->getPeriod();
    }

    sec = period->getMilliseconds() / 1000;
    usec =
        ((period->getMilliseconds() -  (sec * 1000)) * 1000)
        +
        (period->getNanoseconds() / 1000);
    
    jlong secAdjustment = 0;
    if (usec > 999999) {
        secAdjustment = (usec/1000000);
        sec += secAdjustment;
        usec = usec - (secAdjustment * 1000000);
    }

    int *pipeID = new int[2];
    pipe(pipeID);
    this->pipeID_ = (gnu::gcj::RawData*)pipeID;
    RTThreadTimeoutHandler* th =  new RTThreadTimeoutHandler(pipeID[1], this);
    this->timeoutHandler_ = (gnu::gcj::RawData*)th; 
    th->registerHandler((jint)sec, (jint)usec);
    this->hasStartedTimer = true;

    if (updateReleaseParams) {
        this->releaseParameterChanged = true;
        this->updatePeriodicParameters();
    }
}

void
javax::realtime::RealtimeThread::updatePeriodicParameters() {
    javax::realtime::RelativeTime* period = this->getPeriod();
    jlong sec = period->getMilliseconds() / 1000;
    jlong usec =
        ((period->getMilliseconds() -  (sec * 1000)) * 1000)
        +
        (period->getNanoseconds() / 1000);
    
    jlong secAdjustment = 0;
    if (usec > 999999) {
        secAdjustment = (usec/1000000);
        sec += secAdjustment;
        usec = usec - (secAdjustment * 1000000);
    }

    RTThreadTimeoutHandler* th = (RTThreadTimeoutHandler* ) this->timeoutHandler_;
    th->updateTimerParameters((jint)sec, (jint)usec);

}
