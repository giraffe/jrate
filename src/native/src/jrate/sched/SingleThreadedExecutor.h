// ************************************************************************
//    $Id: SingleThreadedExecutor.h 429 2004-09-15 20:32:02Z corsaro $
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
#ifndef _JRATE_SCHED_SINGLE_THREADED_EXECUTOR_H_
#define _JRATE_SCHED_SINGLE_THREADED_EXECUTOR_H_

#include "jrate/sched/Thread.h"
#include "jrate/synch/Semaphore.h"
#include "jrate/sched/IExecutor.h"
#include "jrate/sched/Runnable.h"


namespace jrate { namespace sched {

// Template specialization for single threaded non buffering
// executors.
//
template <typename Scheduler>
class SingleThreadedExecutor : public jrate::sched::IExecutor<Scheduler> {
public:
    /**
     * Creates a single threaded executor.
     */
    SingleThreadedExecutor()
        : executorLogic_(),
          thread_(&executorLogic_)
        {
            thread_.start();
        }

    /**
     * Creates a single threaded executor, with a given scheduling
     * parameters.
     */
    SingleThreadedExecutor(const typename Scheduler::SchedParams_t& sp)
        : executorLogic_(),
          thread_(executorLogic_)
        {
            thread_.setSchedParam(sp);
            thread_.start();
        }

    /**
     * Releases all the resources used by this executor.
     */
    virtual ~SingleThreadedExecutor() { }

public:
    virtual void execute(jrate::sched::Runnable* task) {
        executorLogic_.execute(task);
    }

    virtual void shutdown(jrate::sched::Runnable* shutdownLogic
                          = &jrate::sched::Runnable::NoAction) {
        executorLogic_.shutdown(shutdownLogic);
    }

    /**
     * Gets the scheduling parameters associated with this executor.
     */
    virtual const typename Scheduler::SchedParams_t& getSchedParam() {
        return thread_.getSchedParam();
    }

    /**
     * Sets the scheduling paramenters associated with this executor.
     */
    virtual void setSchedParam(const typename Scheduler::SchedParams_t& schedParam) {
        thread_.setSchedParam(schedParam);
    }

private:
    //////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////

    class ExecutorLogic : public jrate::sched::Runnable {
    public:
        ExecutorLogic()
            : active_(true),
              executorAvailable_(1),
              workAvailable_(0),
              shutDownCompletion_(0),
              executeCall_(0),
              runIteration_(0)
            { }

        virtual ~ExecutorLogic() {
            /*
             * It is safe to call shutdown more then once, so we call
             * it from here just to aviod problems to people that
             * forget to shut it down.
             */
            this->shutdown();
        }

    public:
        void execute(jrate::sched::Runnable* task) {
            executorAvailable_.wait();
            currentTask_ = task;
            workAvailable_.signal();
        }

        void shutdown(jrate::sched::Runnable* shutdownLogic
                      = &jrate::sched::Runnable::NoAction) {
            if (active_) {
                shutDownMutex_.acquire();
                /*
                 * Did anybody actually shut it down while we were
                 * waiting on the mutex?
                 */
                if (active_) {
                    active_ = false;
                    this->execute(shutdownLogic);
                    shutDownCompletion_.wait();
                }
                shutDownMutex_.release();
            }
        }

        virtual void run() {
            //
            // By notifying here the availability of an executor we
            // make sure that even if the thread has not started yet
            // we wait for it.
            while (active_) {
                workAvailable_.wait();
                currentTask_->run();
                executorAvailable_.signal();
            }
            shutDownCompletion_.signal();
        }

    private:
        bool active_;
        jrate::synch::Semaphore executorAvailable_;
        jrate::synch::Semaphore workAvailable_;
        jrate::synch::Semaphore shutDownCompletion_;
        int executeCall_;
        bool runIteration_;
        jrate::synch::FastMutex_t shutDownMutex_;
        jrate::sched::Runnable*  currentTask_;

    };
    //////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////

private:
    ExecutorLogic executorLogic_;
    jrate::sched::Thread<Scheduler> thread_;
};

} /* jrate */ } /* sched */

#endif /* _JRATE_SCHED_SINGLE_THREADED_EXECUTOR_H_ */
