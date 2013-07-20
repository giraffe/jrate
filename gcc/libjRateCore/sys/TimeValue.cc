#include "jrate/sys/TimeValue.h"
#include "jrate/sys/Config.h"

const jrate::sys::TimeValue jrate::sys::TimeValue::zero(0, 0);

jrate::sys::TimeValue::TimeValue(unsigned long sec, unsigned long usec)
    : sec_(sec),
      usec_(usec) { }

jrate::sys::TimeValue::TimeValue(const jrate::sys::TimeValue& tv) {
    *this = tv;
}

jrate::sys::TimeValue::TimeValue(const struct timeval& tv)
    : sec_(tv.tv_sec),
      usec_(tv.tv_usec) { }

jrate::sys::TimeValue::~TimeValue() { }

struct timeval
jrate::sys::TimeValue::operator()() const {
    timeval tv;
    tv.tv_sec  = sec_;
    tv.tv_usec = usec_;

    return tv;
}

const jrate::sys::TimeValue&
jrate::sys::TimeValue::operator=(const jrate::sys::TimeValue& rhs) {
    if (&rhs != this) {
        sec_ = rhs.sec_;
        usec_ = rhs.usec_;
    }
    return *this;
}

const jrate::sys::TimeValue
jrate::sys::TimeValue::operator+(const jrate::sys::TimeValue& rhs) const {
    return TimeValue(sec_ + rhs.sec_,
                     usec_ + rhs.usec_);
}

const jrate::sys::TimeValue
jrate::sys::TimeValue::operator-(const jrate::sys::TimeValue& rhs) const {
    return TimeValue(sec_ + rhs.sec_,
                     usec_ + rhs.usec_);
}


void
jrate::sys::TimeValue::roundTo(unsigned long unitInUSec) {
    usec_ = (usec_/unitInUSec)*unitInUSec;
}

void
jrate::sys::TimeValue::roundToPlatformResolution() {
    usec_ = (usec_/jrate::sys::TIME_RESOLUTION)*jrate::sys::TIME_RESOLUTION;
}

unsigned long&
jrate::sys::TimeValue::sec() { return sec_; }

unsigned long&
jrate::sys::TimeValue::usec() { return usec_; }

const unsigned long
jrate::sys::TimeValue::msec() {
    return sec_*1000 + usec_/1000;
}
