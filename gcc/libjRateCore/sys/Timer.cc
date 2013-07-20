#include "jrate/sys/Timer.h"
#include <time.h>
#include <sys/time.h>


jrate::sys::Timer::Timer(jrate::sys::Command* command,
                         const jrate::sys::TimeValue& delay,
                         const jrate::sys::TimeValue& interval)
    : handler_(command),
      delay_(delay),
      appointment_(delay),
      interval_(interval),
      status_(IDLE)
{ } 

jrate::sys::Timer::~Timer() { }

void
jrate::sys::Timer::cancel() {
    this->status(CANCELLED);
    jRateTimerManager().cancel(this);
}

void
jrate::sys::Timer::schedule() {
    this->status(SCHEDULED);
    this->computeAppointment();
    jRateTimerManager().schedule(this);
}

void
jrate::sys::Timer::reschedule() {
    this->status(SCHEDULED);
    this->computeAppointment();
    jRateTimerManager().reschedule(this);
}

const jrate::sys::TimeValue&
jrate::sys::Timer::appointment() const {
    return appointment_;
}

bool
jrate::sys::Timer::operator>(const Timer& rhs) const {
    return appointment_ > rhs.appointment_;
}

void
jrate::sys::Timer::fire() {
    //
    // Schedule the timer if necessary e.g. periodic
    //
    if (interval_ != jrate::sys::TimeValue::zero) {
        this->computeAppointment();
        jRateTimerManager().schedule(this);
    }
    handler_->execute();
}

void
jrate::sys::Timer::computeAppointment() {
    struct timeval tv;
    gettimeofday(&tv, 0);
    appointment_ = interval_ + tv;
    appointment_.roundToPlatformResolution();
}
