// ************************************************************************
//    $Id: Timer.java 468 2004-12-22 22:09:37Z mdeters $
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
 * A Timer is a timed event that measures time relative to a given
 * Clock. This class defines basic functionality available to all
 * timers. Applications will generally use either PeriodicTimer to
 * create an event that is fired repeatedly at regular intervals, or
 * OneShotTimer for an event that just fires once at a specific time. 
 * A timer is always based on a Clock, which provides the basic
 * facilities of something that ticks along following some time line
 * (real-time, cpu-time, user-time, simulation-time, etc.). All timers
 * are created disabled and do nothing until start() is called.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public abstract class Timer extends AsyncEvent {

    protected Clock clock;
    protected boolean isEnabled = true;
    protected boolean isRunning = false;
    
    /**
     * Create a timer that fires at time t, according to Clock c and
     * is handled by the specified handler.
     *
     * @param t The time to fire the event, Will be converted to
     * absolute time.
     * @param c The clock on which to base this time. If null, the
     * system realtime clock is used.
     * @param handler The default handler to use for this event. If
     * null, no handler is associated with it and nothing will happen
     * when this event fires until a handler is provided.
     */
    protected Timer(HighResolutionTime t, Clock c, AsyncEventHandler handler) {
        super();
        super.addHandler(handler); 
        this.clock = (c != null) ? c : Clock.getRealtimeClock();
    }


    /**
     * Create a {@link javax.realtime.ReleaseParameters} block
     * appropriate to the timing characteristics of this event. The
     * default is the most pessimistic: {@link
     * javax.realtime.AperiodicParameters}. This is typically called
     * by code that is setting up a handler for this event that will
     * fill in the parts of the release parameters that it knows the
     * values for, like cost.
     *
     * @return an instance of {@link ReleaseParameters}.
     */
    public ReleaseParameters createReleaseParameters()
    {
        return this.getTimerImpl().createReleaseParameters();
    }

    /**
     * Stop this from counting and return as many of its resources as
     * possible back to the system.
     *
     */
    public void destroy() {
        this.getTimerImpl().destroy();
    }

    /**
     * Disable this timer, preventing it from firing. It may
     * subsequently be reenabled. If the timer is disabled when its
     * fire time occurs then it will not fire. However, a disabled
     * timer continues to count while it is disabled and if it is
     * subsequently reabled before its fire time occures and is
     * enabled when its fire time occurs it will fire. However, it is
     * important to note that this method does not delay the time
     * before a possible firing. For example, if the timer is set to
     * fire at time 42 and the <code>disable()</code> is called at
     * time 30 and <code> enable() </code> is called at time 40 the
     * firing will occur at time 42 (not time 52). These semantics
     * imply also, that firings are not queued. Using the above
     * example, if enable was called at time 43 no firing will occur,
     * since at time 42 this was disabled.
     *
     */
    public void disable() {
        this.getTimerImpl().disable();
    }

    /**
     * Re-enable this timer after it has been disabled. See <code>
     * Timer.disable() </code>.
     *
     */
    public void enable() {
        this.getTimerImpl().enable();
    }


    /**
     * Return the Clock that this timer is based on.
     *
     * @return a <code>Clock</code> value representing the Clock that
     * this timer is based on.
     */
    public Clock getClock() {
        return this.clock;
    }

    /**
     * Get the time at which this event will fire.
     *
     * @return an <code>AbsoluteTime</code> object representing the
     * absolute time at which this will fire.
     */
    public AbsoluteTime getFireTime() {
        return this.getTimerImpl().getFireTime();
    }

    /**
     * Tests this to determine if this and been started and is in a
     * state (enabled) such that when the given time occurs it will
     * fire the event.
     *
     * @return   True if the  timer has   been started  and is  in the
     * enabled state. False, if the timer has either not been started,
     * started and is in the disabled state, or started and stopped.
     */
    public boolean isRunning() {
        return this.getTimerImpl().isRunning();
    }

    /**
     * Changes the scheduled time for this event.  It can take either
     * absolute or relative times.
     *
     * @param time the time to reschedule for this event firing if t
     * is null, the previous fire time is still the time at which this
     * will fire.
     */
    public void reschedule(HighResolutionTime time) {
        this.getTimerImpl().reschedule(time);
    }

    /**
     * A Timer starts measuring time from when it is started.
     *
     */
    public void start() {
        this.getTimerImpl().start();
    }

    /**
     * Stops a timer that is running and changes its state to not started.
     *
     * @return True, if this was started and enabled and stops this. 
     * The new state of this is not started. False, if this was not
     * started or disabled. The state of this is not changed.
     */
    public boolean stop() {
        return this.getTimerImpl().stop();
    }            

    /**
     * This method is implemented in subclasses.
     */
    protected abstract TimerImpl getTimerImpl();
}
