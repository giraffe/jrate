// ************************************************************************
//    $Id: TimeValue.h 429 2004-09-15 20:32:02Z corsaro $
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
#ifndef _JRATE_SYS_TIME_VALUE_H_
#define _JRATE_SYS_TIME_VALUE_H_

#include <sys/time.h>

namespace jrate { namespace sys {


class TimeValue {
public:
    static const TimeValue zero;

public:
    TimeValue(unsigned long sec, unsigned long usec);
    TimeValue(const TimeValue& tv);
    TimeValue(const TimeValue* tv);
    TimeValue(const struct timeval& tv);
    ~TimeValue();

public:
    struct timeval operator()() const;

    const TimeValue& operator=(const TimeValue& rhs);
    const TimeValue  operator+(const TimeValue& rhs) const;
    const TimeValue  operator-(const TimeValue& rhs) const;

    bool operator<(const TimeValue& rhs) const {
        return ((sec_ < rhs.sec_))
            || ((sec_ == rhs.sec_) && (usec_ < rhs.usec_));
    }

    bool operator>(const TimeValue& rhs) const {
        return ((sec_ > rhs.sec_)) ||
            ((sec_ > rhs.sec_) && (usec_ >  rhs.usec_));
    }

    bool operator==(const TimeValue& rhs) const {
        return (sec_ == rhs.sec_) && (usec_ ==  rhs.usec_);
    }

    bool operator!=(const TimeValue& rhs) const {
        return !(*this == rhs);
    }

    bool operator>=(const TimeValue& rhs) const {
        return (sec_ > rhs.sec_)
            || ( (sec_ == rhs.sec_) && (usec_ >=  rhs.usec_));
    }

    bool operator<=(const TimeValue& rhs) const {
        return (sec_ < rhs.sec_)
            || ( (sec_ == rhs.sec_) && (usec_ <=  rhs.usec_));
    }

    /**
     * Rounds a time to be represented with a precision give in micro
     * seconds.
     */
    void roundTo(unsigned long unitInUSec);

    /**
     * Rounds to the platform supported time resolutiontime.
     */
    void roundToPlatformResolution();

public:
    unsigned long& sec();
    unsigned long& usec();
    const unsigned long msec();
private:
    unsigned long sec_;
    unsigned long usec_;
};

}/* jrate */ } /* sys */

#endif /* _JRATE_SYS_TIME_VALUE_H_ */
