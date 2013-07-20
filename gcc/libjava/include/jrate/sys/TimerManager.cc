#include "jrate/sys/TimerManager.h"
#include "jrate/sys/Config.h"
jrate::sys::TimerManager&
jRateTimerManager() {
    static jrate::sys::TimerManager timerManager_(jrate::sys::TIMER_MANAGER_QUEUE,
                                                  jrate::sys::TIMER_MANAGER_EXECUTORS);
    return timerManager_; 
}

jrate::sys::TimerManager::TimerManager(size_t queueSize, size_t executorNum)
    : executor_(queueSize, executorNum) { }

jrate::sys::TimerManager::~TimerManager() {}

void
jrate::sys::TimerManager::schedule(jrate::sys::Timer* timer) {
    timerList_.push(timer);
}

void
jrate::sys::TimerManager::reschedule(jrate::sys::Timer* timer) {
    timerList_.push(timer);
}

void
jrate::sys::TimerManager::cancel(jrate::sys::Timer*) {
    // Timers which are cancelled disable themselves.
}

void
jrate::sys::TimerManager::start() { }

void
jrate::sys::TimerManager::shutdown() { }
