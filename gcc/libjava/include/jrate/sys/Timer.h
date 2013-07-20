// ************************************************************************
//    $Id: Timer.h 429 2004-09-15 20:32:02Z corsaro $
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
#ifndef _JRATE_SYS_TIMER_H_
#define _JRATE_SYS_TIMER_H_

#include <sys/time.h>

#include "jrate/sys/TimeValue.h"
#include "jrate/sys/TimerManager.h"
#include "jrate/sys/Command.h"

namespace jrate { namespace sys {


class Timer {
public:
    typedef enum {SCHEDULED, FIRED, CANCELLED, IDLE} TimerStatus;

public:
    Timer(jrate::sys::Command* command,
          const jrate::sys::TimeValue& delay,
          const jrate::sys::TimeValue& interval
          = jrate::sys::TimeValue::zero);

    ~Timer();

public:
    void cancel();
    void schedule();
    void reschedule();

public:
    const TimeValue& appointment() const;

    inline TimerStatus status() {
        return status_;
    }

protected:
    inline void status(TimerStatus s) {
        status_ = s;
    }

    void computeAppointment();

public:
    bool operator>(const Timer& rhs) const;

public:
    //
    // TODO: Implement these methods
    //
    void addHandler(jrate::sys::Command* handler);
    void removeHandler(jrate::sys::Command* handler);
    void setHandler(jrate::sys::Command* handler);

private:
    friend class TimerManager;
    void fire();

private:
    jrate::sys::Command* handler_;
    jrate::sys::TimeValue delay_;
    jrate::sys::TimeValue appointment_;
    jrate::sys::TimeValue interval_;
    TimerStatus status_;
};

}/* jrate */ } /* sys */

#endif /* _JRATE_SYS_TIMER_H_ */
