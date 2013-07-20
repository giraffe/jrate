#ifndef _JRATE_SCHED_PRIORITY_SCHEDULER_H_
#define _JRATE_SCHED_PRIORITY_SCHEDULER_H_

#include <sched.h>
#include <pthread.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

#include <jrate/sched/Thread.h>

namespace jrate { namespace sched {


template <typename SP, int POLICY>
class PriorityScheduler {
public:
    static const int MAX_PRIORITY; 
    static const int MIN_PRIORITY;
    static const int NORM_PRIORITY;
    
public:
    typedef SP SchedParams_t;
    typedef jrate::sched::Thread<PriorityScheduler<SP, POLICY> > Thread_t;

public:

    static PriorityScheduler& instance() {
        return theInstance_;
    }

public:

    void addSchedulable(jrate::sched::Thread<PriorityScheduler>& thread) {
        this->addSchedulable(thread, defaultSchedParams_);
    }

    void addSchedulable(jrate::sched::Thread<PriorityScheduler>& thread,
                        const SchedParams_t& sp)
    {
        // Do registration work
        this->setSchedParams(thread, sp);
    }

    void removeSchedulable(jrate::sched::Thread<PriorityScheduler>& /* thread */) {
        // TODO: add support.
    }

    bool setSchedParams(jrate::sched::Thread<PriorityScheduler>& thread,
                        const SchedParams_t& sp) {
        pthread_t tid = getThreadID(thread);
        sched_param psp;
        psp.sched_priority = this->checkPriority(sp.getPriority());
        pthread_setschedparam(tid, POLICY, &psp);
        return true;
    }


    unsigned short getMinPriority() {
        return minPriority_;
    }

    unsigned short getNormalPriority() {
        return normalPriority_;
    }

    unsigned short getMaxPriority() {
        return maxPriority_;
    }

public:
    /**
     * Since there might be more scheduler in the system managing
     * different class of threads it is important to provide a way of
     * registering the main thread. Right now this is the method that
     * is provided.
     */
    void registerMainThread() {
        static Thread_t mainThread(pthread_self());
        mainThreadRegistered_ = true;
        if (!mainThreadRegistered_)
            this->addSchedulable(mainThread);
    }

protected:
    unsigned short checkPriority(unsigned short p) {
        if (p < minPriority_)
            return minPriority_;
        if (p > maxPriority_)
            return maxPriority_;
        return p;
    }
protected:
    PriorityScheduler() : mainThreadRegistered_(false) {
        minPriority_ = sched_get_priority_min(POLICY);
        maxPriority_ = sched_get_priority_max(POLICY);
        normalPriority_ = (maxPriority_ - minPriority_) / 2;
        defaultSchedParams_.setPriority(normalPriority_);
        sched_param sp;
        sp.sched_priority = normalPriority_;
        pid_t pid = getpid();
        if (sched_setscheduler(pid, POLICY, &sp) != 0) {
            fprintf(stderr, "[WARNING]: Unable to set scheduling policy.\n");
            fprintf(stderr, "[WARNING]: You might need to run this application as root\n");
        }
    }

    ~PriorityScheduler() { }

protected:
    PriorityScheduler& operator=(const PriorityScheduler&);

private:
    SchedParams_t defaultSchedParams_;
    unsigned short minPriority_;
    unsigned short normalPriority_;
    unsigned short maxPriority_;

    static PriorityScheduler theInstance_;

    volatile bool mainThreadRegistered_;
};

} /* jrate */ } /* sched */

template <typename SP, int POLICY> 
const int ::jrate::sched::PriorityScheduler<SP, POLICY>::MAX_PRIORITY  =
sched_get_priority_max(::jrate::sched::PriorityScheduler<SP, POLICY>::POLICY);

template <typename SP, int POLICY> 
const int ::jrate::sched::PriorityScheduler<SP, POLICY>::MIN_PRIORITY  =
sched_get_priority_min(::jrate::sched::PriorityScheduler<SP, POLICY>::POLICY);

template <typename SP, int POLICY> 
const int ::jrate::sched::PriorityScheduler<SP, POLICY>::NORM_PRIORITY =
(jrate::sched::PriorityScheduler<SP, POLICY>::MAX_PRIORITY -
 jrate::sched::PriorityScheduler<SP, POLICY>::MIN_PRIORITY) / 2;

template <typename SP, int POLICY> jrate::sched::PriorityScheduler<SP, POLICY>
jrate::sched::PriorityScheduler<SP, POLICY>::theInstance_;


#endif // _JRATE_SCHED_PRIORITY_SCHEDULER_H_
