// ************************************************************************
//    $Id: TimerImpl.java 416 2004-02-22 18:35:45Z corsaro $
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
 * This interface provide the basic method for all the timer
 * implementations. Timer implementation differ for different kind of
 * clocks.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
interface TimerImpl {

    /**
     * Stop this from counting and return as many of its resources as
     * possible back to the system.
     *
     */
    void destroy();

    /**
     * Re-enable this timer after it has been disabled. See <code>
     * Timer.disable() </code>.
     *
     */
    void enable();

    
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
    void disable();


    /**
     * Tests this to determine if this and been started and is in a
     * state (enabled) such that when the given time occurs it will
     * fire the event.
     *
     * @return   True if the  timer has   been started  and is  in the
     * enabled state. False, if the timer has either not been started,
     * started and is in the disabled state, or started and stopped.
     */
    boolean isRunning();

    /**
     * Change the scheduled time for this event. can take either
     * absolute or relative times.
     *
     * @param time the time to reschedule for this event firing if t
     * is null, the previous fire time is still the time at which this
     * will fire.
     */
    void reschedule(HighResolutionTime time);

    /**
     * A Timer starts measuring time from when it is started.
     *
     */
    void start();

    /**
     * Stops a timer that is running and changes its state to not started.
     *
     * @return True, if this was started and enabled and stops this. 
     * The new state of this is not started. False, if this was not
     * started or disabled. The state of this is not changed.
     */
    boolean stop();
    
    /**
     * Get the time at which this event will fire.
     *
     * @return an <code>AbsoluteTime</code> object representing the
     * absolute time at which this will fire.
     */
    AbsoluteTime getFireTime();

    
    /**
     * Create a {@link javax.realtime.ReleaseParameters} block
     * appropriate to the timing characteristics of this event. The
     * default is the most pessimistic: {@link
     * javax.realtime.AperiodicParameters}. This is typically called
     * by code that is setting up a handler for this event that will
     * fill in the parts of the release parameters that it knows the
     * values for, like cost.
     *
     * @return an instance of {@link java.realtime.ReleaseParameters}.
     */
    ReleaseParameters createReleaseParameters();

}
