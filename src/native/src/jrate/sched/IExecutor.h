// ************************************************************************
//    $Id: IExecutor.h 429 2004-09-15 20:32:02Z corsaro $
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
#ifndef JRATE_SCHED_EXECUTOR_H_
#define JRATE_SCHED_EXECUTOR_H_

#include "jrate/sched/Runnable.h"

namespace jrate { namespace sched {

template <typename Scheduler>
class IExecutor;

/**
 * Abstract base for all executors.
 */
template <typename Scheduler>
class IExecutor {
public:
    virtual ~IExecutor() { }

public:
    /**
     * Execute the given task. The server model used by the executor
     * (e.g. no threads, single threaded, thread per request, etc)
     * depends on the specific inplementation.
     */
    virtual void execute(jrate::sched::Runnable* task) = 0;

    /**
     * Shuts down the executor. This method bloks until the pending
     */
    virtual void shutdown(jrate::sched::Runnable* shutdownLogic
                            = &jrate::sched::Runnable::NoAction) = 0;

public:
    /**
     * Gets the scheduling parameters associated with this executor.
     */
    virtual const typename Scheduler::SchedParams_t& getSchedParam() = 0;

    /**
     * Sets the scheduling paramenters associated with this executor.
     */
    virtual void setSchedParam(const typename Scheduler::SchedParams_t& schedParam) = 0;
};

} /* jrate */ } /* sched */

#endif /* JRATE_SCHED_EXECUTOR_H_ */
