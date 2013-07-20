// ************************************************************************
//    $Id: TimerManager.h 429 2004-09-15 20:32:02Z corsaro $
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
#ifndef JRATE_SYS_TIMER_MANAGER_H_
#define JRATE_SYS_TIMER_MANAGER_H_

#include <map>
#include <functional>

#include "jrate/sys/Timer.h"
#include "jrate/sys/TimeValue.h"

#include "jrate/sched/Types.h"
#include "jrate/sched/PooledExecutor.h"


extern "C++" {
    namespace jrate {
        namespace sys {
            class Timer;
        }
    }
};

namespace jrate { namespace sys {

template <typename T>
struct PtrGreater {
public:
    bool operator()(const T* lhs, const T* rhs) {
        return *lhs > *rhs;
    }

    bool operator()(const T& lhs, const T& rhs) {
        return *lhs > *rhs;
    }
};


/**
 * The <code>TimeManager</code> class is a singleton that manages the
 * notification of timers. In jRate, timers are not directly tied to
 * OS provided timers, instead a time manager takes care of notifying
 * the timers when needed.
 */
class TimerManager {
public:
    TimerManager(size_t queueSize, size_t executorNum);
    ~TimerManager();

public:
    /**
     * Schedules a timer.
     */
    void schedule(jrate::sys::Timer* timer);

    /**
     * Reschedules a timer, by making the appropriate changes.
     */
    void reschedule(jrate::sys::Timer* timer);

    /**
     * Cancels a timer.
     */
    void cancel(jrate::sys::Timer* timer);

    void start();

    void shutdown();

private:
    TimerManager(const TimerManager& tm);

private:
    class MainLoopLogic : public jrate::sched::Runnable {
    public:
        MainLoopLogic(TimerManager& tm);
        virtual ~MainLoopLogic();

    public:
        virtual void run();

    };
private:

    std::priority_queue<jrate::sys::TimeValue,
                        std::vector<jrate::sys::Timer*>,
                        jrate::sys::PtrGreater<jrate::sys::Timer> >
    timerList_;

    jrate::sched::PooledExecutor<jrate::sched::Scheduler_t> executor_;

};

}/* jrate */ } /* sys */

jrate::sys::TimerManager& jRateTimerManager();

#endif /* JRATE_SYS_TIMER_MANAGER_H_ */
