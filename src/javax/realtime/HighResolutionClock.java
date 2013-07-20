// ************************************************************************
//    $Id: HighResolutionClock.java 416 2004-02-22 18:35:45Z corsaro $
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
 * This class provide an high resolution clock. The resolution is the
 * same as the clock speed at which the processor is running, on
 * Pentium processors.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public class HighResolutionClock extends Clock {

    private static HighResolutionClock theIntance;

    static {
        theIntance = new HighResolutionClock();
    }
    
    public HighResolutionClock() {}
    
    public static HighResolutionClock instance() {
        return theIntance;
    }
    
    /**
     * Return the resolution of the clock -- the interval between ticks.
     *
     * @return A RelativeTime object representing the resolution of this.
     */
    public RelativeTime getResolution() {
        return HighResolutionClock.getResolutionImpl();
    }

    private static native RelativeTime getResolutionImpl();
    

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
        HighResolutionClock.setResolutionImpl();
    }

    private static native void setResolutionImpl();


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
        HighResolutionClock.getTimeImpl(time);
    }

    private static native void getTimeImpl(AbsoluteTime time);

    public long getClockTickCount()  {
        return HighResolutionClock.getClockTickCountImpl();
    }

    private static native long getClockTickCountImpl();

    public RelativeTime clockTickToTime(long clockTicks) {
        RelativeTime time = new RelativeTime();
        this.clockTickToTime(clockTicks, time);
        return time;
    }

    public native void clockTickToTime(long clockTicks, RelativeTime time);


    // -- jRate Specific Methods --
    TimerImpl createPeriodicTimerImpl(PeriodicTimer timer) {
        // TODO: Implement Me!!!
        return null;
    }


    TimerImpl createOneShotTimerImpl(OneShotTimer timer) {
        // TODO: Implement Me!!!
        return null;
    }


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
        return null;
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
