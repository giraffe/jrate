// ************************************************************************
//    $Id: PooledExecutor.h 429 2004-09-15 20:32:02Z corsaro $
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
#ifndef _JRATE_SCHED_POOLED_EXECUTORS_H_
#define _JRATE_SCHED_POOLED_EXECUTORS_H_

#include "jrate/sched/Types.h"
#include "jrate/sched/IExecutor.h"
#include "jrate/sched/Runnable.h"
#include "jrate/sched/Channel.h"
#include "jrate/sched/Thread.h"
#include "jrate/sched/SingleThreadedExecutor.h"

#include "jrate/synch/Synchronizer.h"

#include <stack>
#include <queue>
#include <map>

namespace jrate { namespace sched {

typedef SingleThreadedExecutor<Scheduler_t> SingleThreadedExecutor_t;

typedef Channel<SingleThreadedExecutor_t*,
                std::queue,
                jrate::synch::MutexSynchronizer_t>
ExecutorQueueChannel_t;

typedef Channel<Runnable*,
                std::queue,
                jrate::synch::MutexSynchronizer_t>
TaskQueueChannel_t;

template <typename Scheduler,
          typename TaskChannel = TaskQueueChannel_t,
          typename ExecutorChannel = ExecutorQueueChannel_t>
class PooledExecutor;


template <typename Scheduler,
          typename TaskChannel,
          typename ExecutorChannel>
class PooledExecutor
    : public jrate::sched::IExecutor<Scheduler>
{
public:
    /**
     * Creates a pooled Executor with a given number of executors and
     * a queue size.
     */
    PooledExecutor(size_t executorNum, size_t queueLen)
        : executorNum_(executorNum),
          queueLen_(queueLen),
          taskChannel_(queueLen),
          executorChannel_(executorNum)
        {
            executor_ =
                new typename ExecutorChannel::ItemPtr_t[executorNum];

            for (size_t i = 0; i < executorNum_; ++i) {
                executor_[i] =
                    new typename ExecutorChannel::Item_t();
                executorChannel_.push(executor_[i]);
                logicAdapter_[executor_[i]] =
                    new ExecutorLogicAdapter(executor_[i], executorChannel_);
            }
        }

    /**
     * Creates with a given scheduling
     * parameters.
     */
    PooledExecutor(size_t executorNum,
                  size_t queueLen,
                  const typename Scheduler::SchedParams_t& sp)
        : executorNum_(executorNum),
          queueLen_(queueLen),
          taskChannel_(queueLen),
          executorChannel_(executorNum)
        {
            executor_ =
                new typename ExecutorChannel::Item_t[executorNum];
            for (size_t i = 0; i < executorNum_; ++i) {
                executor_[i] = new typename ExecutorChannel::Item_t();
                executorChannel_.push(executor_[i]);
                executor_[i].setSchedParam(sp);
                logicAdapter_[executor_[i]] =
                    new ExecutorLogicAdapter(executor_[i], executorChannel_);
            }
        }

    virtual ~PooledExecutor() {
        this->shutdown();
        /**
         ** Here we are sure that the executors are not running any more.
         **/
        for (size_t i = 0; i < executorNum_; ++i)
            delete executor_[i];
        delete[] executor_;
    }

public:
    virtual void execute(jrate::sched::Runnable* task) {
        typename ExecutorChannel::ItemPtr_t executor =
            executorChannel_.pop();

        ExecutorLogicAdapter* adapter = logicAdapter_[executor];
        adapter->setTask(task);
        executor->execute(adapter);
    }

    virtual void shutdown(jrate::sched::Runnable* shutdownLogic
                          = &jrate::sched::Runnable::NoAction) {
        for (size_t i = 0; i < executorNum_; ++i)
            executor_[i]->shutdown(shutdownLogic); 
    }

    /**
     * Gets the scheduling parameters associated with this executor.
     */
    virtual const typename Scheduler::SchedParams_t& getSchedParam() {
        return executor_[0]->getSchedParam();
    }

    /**
     * Sets the scheduling paramenters associated with this executor.
     */
    virtual void setSchedParam(const typename Scheduler::SchedParams_t& schedParam) {
        for (size_t i = 0; i < executorNum_; ++i)
            executor_[i]->setSchedParam(schedParam);
    }

private:
    //////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////

    class ExecutorLogicAdapter : public jrate::sched::Runnable {
    public:
        ExecutorLogicAdapter(typename ExecutorChannel::ItemPtr_t executor,
                             ExecutorChannel& executorChannel,
                             jrate::sched::Runnable* task = &jrate::sched::Runnable::NoAction)
            : executor_(executor),
              executorChannel_(executorChannel),
              task_(task)
            { }

        void setTask(jrate::sched::Runnable* task) {
            task_ = task;
        }

        virtual void run() {
            task_->run();
            executorChannel_.push(executor_);
        }

    private:
        typename ExecutorChannel::ItemPtr_t      executor_;
        ExecutorChannel&                         executorChannel_;
        jrate::sched::Runnable*                  task_;
    };
    //////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////

private:
    size_t   executorNum_;
    size_t   queueLen_;

    TaskChannel       taskChannel_;
    ExecutorChannel   executorChannel_;

    typename ExecutorChannel::ItemPtr_t*  executor_;

    std::map<typename ExecutorChannel::ItemPtr_t, ExecutorLogicAdapter*> logicAdapter_;
};

} /* jrate */ } /* sched */

#endif /* _JRATE_SCHED_POOLED_EXECUTORS_H_ */
