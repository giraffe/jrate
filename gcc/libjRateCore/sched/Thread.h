// ************************************************************************
//    $Id: Thread.h 429 2004-09-15 20:32:02Z corsaro $
// ************************************************************************
//
//                                jRate
//
//               Copyright (C) 2001-2004 by Angelo Corsaro.
//                         <corsaro@cse.wustl.edu>
//                          All Rights Reserved.
//
//   Permission to use, copy, modify, and distribute this software and
//   its  documentation for any purpose is hereby  granted without fee,
//   provided that the above copyright notice appear in all copies and
//   that both that copyright notice and this permission notice appear
//   in  supporting  documentation. I don't make  any  representations
//   about the  suitability  of this  software for any  purpose. It is
//   provided "as is" without express or implied warranty.
//
//
// *************************************************************************
//
// *************************************************************************
#ifndef _JRATE_SCHED_THREAD_H_
#define _JRATE_SCHED_THREAD_H_

// -- POSIX Threads --
#include <pthread.h>
#include <sched.h>

// -- STL Include --
#include <map>
#include <string>

#include <jrate/synch/Synchronizer.h>
#include <jrate/sched/Runnable.h>
#include <jrate/synch/Guard.h>
namespace jrate { namespace sched {

template <typename Sched>
class Thread;

std::string threadNameGenerator();
int registerMainThread();


/**
 * This class is a C++ wrapper for a POSIX thread.
 */
template <typename Sched>
class Thread {
public:
    typedef Sched Scheduler_t;
    typedef typename Sched::SchedParams_t SchedParams_t;

public:

    /** Ctor */
    Thread(Runnable* logic, const std::string& name = threadNameGenerator())
        : logic_(logic),
          threadName_(name),
          isRunning_(false)
        {
            // Notice that there is no matching release in the ctor, this is
            // released by the start mehtod
            threadMutex_.acquire();
            pthread_attr_t threadAttrib;
            pthread_attr_init(&threadAttrib);
            pthread_attr_setscope(&threadAttrib, PTHREAD_SCOPE_SYSTEM);
            pthread_create(&threadID_,
                           &threadAttrib,
                           &jrate::sched::Thread<Sched>::threadStarter,
                           this);
            mapMutex_.acquire();
            threadMap_[threadID_] = this;
            mapMutex_.release();
            Scheduler_t::instance().addSchedulable(*this);
        }


    Thread(Runnable* logic,
           const SchedParams_t& sp,
           const std::string &name = threadNameGenerator())
        : logic_(logic),
          schedParams_(sp),
          threadName_(name),
          isRunning_(false)
        {
            // Notice that there is no matching release in the ctor, this is
            // released by the start mehtod
            threadMutex_.acquire();
            pthread_attr_t threadAttrib;
            pthread_attr_init(&threadAttrib);
            pthread_attr_setscope(&threadAttrib, PTHREAD_SCOPE_SYSTEM);
            pthread_create(&threadID_,
                           &threadAttrib,
                           &jrate::sched::Thread<Sched>::threadStarter,
                           this);
            mapMutex_.acquire();
            threadMap_[threadID_] = this;
            mapMutex_.release();
            Scheduler_t::instance().addSchedulable(*this, schedParams_);
        }


    /** Dtor */
    virtual ~Thread() { }

    /**
     * Sets the scheduling policy for this thread.
     */
    int setSchedParam(const SchedParams_t& sp) {
        schedParams_ = sp;
        return Scheduler_t::instance().setSchedParams(*this, schedParams_);
    }

    const SchedParams_t& getSchedParam() {
        return schedParams_;
    }

    /**
     * Starts the thread
     */
    void start() {
        // This code might get executed more than once in a
        // multi-processor system, but that is OK, since it is
        // idempotent.
        if(!isRunning_) {
            threadMutex_.release();
            isRunning_ = true;
        }

    }

    /**
     * Returns the current executing thread.
     */
    static Thread<Sched>* currentThread() {
        jrate::synch::Guard< ::jrate::synch::MutexSynchronizer_t > guard(mapMutex_);
        return threadMap_[pthread_self()];
    }

    /**
     * Puts the current thread asleep for a give number of milliseconds.
     */
    static void sleep(long millis) {
        timespec request;
        timespec remaining;
        request.tv_sec = millis/1000;
        request.tv_nsec = (millis - (request.tv_sec * 1000)) * 1000000;
        nanosleep(&request, &remaining);
    }

    /**
     * Puts the current thread asleep for a give number for
     * millis+(nanoos/1000000) milliseconds. The actual precision of the
     * sleep implementation depends actually on the underlying OS.
     */
    static void sleep(long millis, long nanos) {
        timespec request;
        timespec remaining;
        request.tv_sec = millis/1000;
        request.tv_nsec = nanos + (millis - (request.tv_sec * 1000)) * 1000000;
        nanosleep(&request, &remaining);
    }

    const std::string & getName() const {
        return threadName_;
    }

    void setName(const std::string &name) {
        threadName_ = name;
    }

    void join() const {
        void **treturn = 0;
        pthread_join(threadID_, treturn);
    }

    void yield() const {
        sched_yield();
    }

protected:

    virtual void run() {
        threadMutex_.acquire();
        if (logic_ != 0)
            logic_->run();
        int retVal = 0;
        pthread_exit(&retVal);
    }

    static void * threadStarter(void *thread) {
        jrate::sched::Thread<Sched>* runner = (jrate::sched::Thread<Sched>*)thread;
        runner->run();
        Scheduler_t::instance().removeSchedulable(*runner);
        pthread_detach(runner->threadID_);
        return (void *)0;
    }


public:

    friend int registerMainThread();
    Thread(pthread_t threadID)
        : logic_(0),
          isRunning_(true),
          threadID_(threadID)

        {
            threadMap_[threadID_] = this;
            threadName_ = "Main-Thread";
        }

    template <typename T> friend pthread_t getThreadID(T& t);


private:

    Runnable* logic_;
    SchedParams_t schedParams_;
    std::string threadName_;
    volatile bool isRunning_;

    pthread_t threadID_;

    // Thread Map
    static std::map< pthread_t, Thread<Sched>* > threadMap_;
    // Map Mutex
    static jrate::synch::MutexSynchronizer_t mapMutex_;
    // Thread Lock
    jrate::synch::MutexSynchronizer_t threadMutex_;
};

template <typename T>
inline pthread_t getThreadID(T& t) {
    return t.threadID_;
}

} /* jrate */ } /* sched */

// Statics Initialization
template <typename Sched>
std::map<pthread_t, jrate::sched::Thread<Sched>* >
jrate::sched::Thread<Sched>::threadMap_;

template <typename Sched>
jrate::synch::MutexSynchronizer_t jrate::sched::Thread<Sched>::mapMutex_;


#endif // _JRATE_SCHED_THREAD_H_
