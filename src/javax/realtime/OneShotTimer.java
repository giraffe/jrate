// ************************************************************************
//    $Id: OneShotTimer.java 416 2004-02-22 18:35:45Z corsaro $
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

package javax.realtime;

/**
 * A  timed  AsyncEvent that is driven  by  a clock. It  will fire off
 * once, when  the clock time reaches the  timeout time.  If the clock
 * time has already passed the timeout time, it will fire immediately.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public class OneShotTimer extends Timer {

    private OneShotTimerImpl timerDelegate;
    
    /**
     * Create an instance of <code>OneShotTimer</code> that will
     * execute its fire method at the expiration of the given time.
     *
     * @param time After timeout time units from  now  fire will be executed.
     * @param handler The AsyncEventHandler that will be scheduled when fire is executed.
     */
    public OneShotTimer(AbsoluteTime time, AsyncEventHandler handler) {
        this(time, Clock.getRealtimeClock(), handler);
        this.timerDelegate = this.clock.createOneShotTimerImpl(this, time);
    }

    /**
     * Create an instance of <code>OneShotTimer</code>, based on the
     * given clock, that will execute its fire method at the
     * expiration of the given time.
     *
     * @param time After timeout time units from  now  fire will be executed.
     * @param clock The timer will increment based on this clock
     * @param handler The AsyncEventHandler that will be scheduled when fire is executed.
     */
    public OneShotTimer(AbsoluteTime time, Clock clock, AsyncEventHandler handler) {
        super(time, clock, handler);
        this.timerDelegate = this.clock.createOneShotTimerImpl(this, time);
    }

    /**
     * Create an instance of <code>OneShotTimer</code> that will
     * execute its fire method at the expiration of the given time.
     *
     * @param time After timeout time units from  now  fire will be executed.
     * @param handler The AsyncEventHandler that will be scheduled when fire is executed.
     */
    public OneShotTimer(RelativeTime time, AsyncEventHandler handler) {
        this(time, Clock.getRealtimeClock(), handler);
        this.timerDelegate = this.clock.createOneShotTimerImpl(this, time);
    }

    /**
     * Create an instance of <code>OneShotTimer</code>, based on the
     * given clock, that will execute its fire method at the
     * expiration of the given time.
     *
     * @param time After timeout time units from  now  fire will be executed.
     * @param clock The timer will increment based on this clock
     * @param handler The AsyncEventHandler that will be scheduled when fire is executed.
     */
    public OneShotTimer(RelativeTime time, Clock clock, AsyncEventHandler handler) {
        super(time, clock, handler);
        this.timerDelegate = this.clock.createOneShotTimerImpl(this, time);
    }

    
    protected TimerImpl getTimerImpl() {
        return this.timerDelegate;
    }

}
