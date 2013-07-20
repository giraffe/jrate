// ************************************************************************
//    $Id: RealtimeClock.java 416 2004-02-22 18:35:45Z corsaro $
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
 * The class <code>RealtimeClock</code> provides access to the
 * "Wall-Clock" time. In the current implementation the resolution of
 * the clock is of the order of microseconds.<br><br>
 *
 * <b>Implementation Note:</b> This class is implemented by using the
 * method call <code>gettimeofday</code>, so it has a resolution that
 * depends on the resolution guaranteed by the underlying OS. If you
 * need to make real fine grain time measurement than you should use
 * that class <code>HighResolutionClock</code>. This class provide
 * nanosecond time accuracy in most plaform.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 * @see javax.realtime.HighResolutionClock
 */
public class RealtimeClock extends Clock {
    
    private static RealtimeClock theInstance = new RealtimeClock();

    
    public static RealtimeClock instance() {
        return theInstance;
    }

    /**
     * Return the resolution of the clock -- the interval between ticks.
     *
     * @return A RelativeTime object representing the resolution of this.
     */
    public RelativeTime getResolution() {
        return this.getResolutionImpl();
    }

    
    /**
     * Set the resolution of this. For some hardwhere clocks setting
     * resolution impossible and if called on those nothing happens.<br><br>
     *
     * <b> Implementation Note: </b> If the requested resolution
     * overceeds the one obtainable by the underlying hardware this
     * method guarantees that the finest resolution possible is set.
     *
     * @param resolution The new resolution of this.
     */
    public void setResolution(RelativeTime resolution) {
        this.setResolutionImpl(resolution);
    }

    /**
     * Return the current time in an existing object. The time
     * represented by the given AbsoluteTime is changed some time
     * between the invocation of the method and the return of the
     * method.
     *
     * @param time The AbsoluteTime object which will have its
     * time changed.
     */
    public void getTime(AbsoluteTime time) {
        this.getTimeImpl(time);
    }

    // -- Natives Methods --

    private  native void getTimeImpl(AbsoluteTime time);
    
    private native void setResolutionImpl(RelativeTime resolution);
    
    private native RelativeTime getResolutionImpl();

    
    // -- jRate Specific Methods --
    // -- Timer Supporting methods --

    /**
     * Creates a <code>PeriodicTimerImpl</code> with the given timing
     * characteristics.
     *
     * @param timer a <code>aPeriodicTimer</code> value representing
     * the owner ot this timer implementation.
     * @param start a <code>RelativeTime</code> value representing the
     * time from <b>now</b> at which the timer will expire for the first time.
     * @param interval a <code>RelativeTime</code> value representing
     * the period of the timer
     * @return a <code>PeriodicTimerImpl</code> value
     */
    PeriodicTimerImpl createPeriodicTimerImpl(PeriodicTimer timer,
                                              RelativeTime  start,
                                              RelativeTime  interval)
    {
        return new RealtimeClockPeriodicTimerImpl(timer, start, interval);
    }

    /**
     * Creates a <code>PeriodicTimerImpl</code> with the given timing
     * characteristics.
     *
     * @param timer a <code>aPeriodicTimer</code> value representing
     * the owner ot this timer implementation.
     * @param start a <code>Absolutetime</code> value representing the
     * time at which the timer will expire for the first time.
     * @param interval a <code>RelativeTime</code> value representing
     * the period of the timer
     * @return a <code>PeriodicTimerImpl</code> value
     */
    PeriodicTimerImpl createPeriodicTimerImpl(PeriodicTimer timer,
                                              AbsoluteTime  start,
                                              RelativeTime  interval)
    {
        return null;
    }
    
    
    /**
     * Creates a <code>OneShotTimerImpl</code> with the given timing
     * characteristics.
     *
     * @param timer a <code>OneShotTimer</code> value representing
     * the owner ot this timer implementation.
     * @param interval a <code>RelativeTime</code> value representing
     * the time from <b>now</b> at which the timer will expire.
     * @return a <code>PeriodicTimerImpl</code> value
     */
    OneShotTimerImpl createOneShotTimerImpl(OneShotTimer timer,
                                            RelativeTime interval)
    {
        return null;
    }    

    
    /**
     * Creates a <code>OneShotTimerImpl</code> with the given timing
     * characteristics.
     *
     * @param timer a <code>OneShotTimer</code> value representing
     * the owner ot this timer implementation.
     * @param time a <code>AbsoluteTime</code> value representing the
     * time at which the timer will expire.
     * @return a <code>PeriodicTimerImpl</code> value
     */
    OneShotTimerImpl createOneShotTimerImpl(OneShotTimer timer,
                                            AbsoluteTime time)
    {
        return null;
    }

}
    
