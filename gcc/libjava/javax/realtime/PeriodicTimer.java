// ************************************************************************
//    $Id: PeriodicTimer.java 416 2004-02-22 18:35:45Z corsaro $
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
 * An AsyncEvent whose fire method is executed periodically according
 * to the given parameters. If a clock is given, calculation of the
 * period uses the increments of the clock. If an interval is given or
 * set the system guarantees that the fire method will execute
 * interval time units after the last execution or its given start
 * time as appropriate. If one of the {@link
 * javax.realtime.HighResolutionTime} argument types is RationalTime
 * then the system guarantees that the fire method will be executed
 * exactly frequency times every unit time (see {@link
 * javax.realtime.RationalTime} constructors) by adjusting the
 * interval between executions of fire(). This is similar to a thread
 * with {@link javax.realtime.PeriodicParameters} except that it is
 * lighter weight. If a PeriodicTimer is disabled, it still counts,
 * and if enabled at some later time, it will fire at its next
 * scheduled fire time.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public class PeriodicTimer extends Timer {

    private PeriodicTimerImpl timerDelegate;
    
    /**
     * Create an instance of AsyncEvent that executes its fire method periodiacally.
     *
     * @param start The time when the first interval begins. 
     * @param interval The time between successive executions of the fire method. 
     * @param handler The instance of AsyncEventHandler that will be
     * scheduled each time the fire method is executed.
     */
    public PeriodicTimer(RelativeTime start, RelativeTime interval,
                         AsyncEventHandler handler)
    {
        this(start, interval, Clock.getRealtimeClock(), handler);
        this.timerDelegate = this.clock.createPeriodicTimerImpl(this, start, interval);
    }

    
    /**
     * Creates a new <code>PeriodicTimer</code> instance.
     * @param start The time when the first interval begins. 
     * @param interval The time between successive executions of the fire method.
     * @param clock The clock whose increments are used to calculate the interval.
     * @param handler The instance of AsyncEventHandler that will be
     * scheduled each time the fire method is executed.
     */
    public PeriodicTimer(RelativeTime start, RelativeTime interval,
                         Clock clock, AsyncEventHandler handler) {
        super(start, clock, handler);
        this.timerDelegate = this.clock.createPeriodicTimerImpl(this, start, interval);
    }
    

        /**
     * Create an instance of AsyncEvent that executes its fire method periodiacally.
     *
     * @param start The time when the first interval begins. 
     * @param interval The time between successive executions of the fire method. 
     * @param handler The instance of AsyncEventHandler that will be
     * scheduled each time the fire method is executed.
     */
    public PeriodicTimer(AbsoluteTime start, RelativeTime interval,
                         AsyncEventHandler handler)
    {
        this(start, interval, Clock.getRealtimeClock(), handler);
        this.timerDelegate = this.clock.createPeriodicTimerImpl(this, start, interval);
    }

    
    /**
     * Creates a new <code>PeriodicTimer</code> instance.
     * @param start The time when the first interval begins. 
     * @param interval The time between successive executions of the fire method.
     * @param clock The clock whose increments are used to calculate the interval.
     * @param handler The instance of AsyncEventHandler that will be
     * scheduled each time the fire method is executed.
     */
    public PeriodicTimer(AbsoluteTime start, RelativeTime interval,
                         Clock clock, AsyncEventHandler handler) {
        super(start, clock, handler);
        this.timerDelegate = this.clock.createPeriodicTimerImpl(this, start, interval);
    }

    
    /**
     * Return the interval of this Timer.
     *
     * @return a <code>RelativeTime</code> object which is the current
     * interval of this
     */
    public RelativeTime getInterval() {
        return this.timerDelegate.getInterval();
    }

    /**
     * Set the interval for this periodic timer
     *
     * @param interval a <code>RelativeTime</code> representing the
     * new interval
     */
    public void setInterval(RelativeTime interval) {
        this.timerDelegate.setInterval(interval);
    }

    protected TimerImpl getTimerImpl() {
        return this.timerDelegate;
    }
}
