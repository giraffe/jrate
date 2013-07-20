// ************************************************************************
//    $Id: Clock.java 416 2004-02-22 18:35:45Z corsaro $
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
 * A clock advances from the past, through the present, into the
 * future. It has a concept of now that can be queried through
 * Clock.getTime(), and it can have events queued on it which will be
 * fired when their appointed time is reached. There are many possible
 * subclasses of clocks: real-time clocks, user time clocks,
 * simulation time clocks. The idea of using multiple clocks may at
 * first seem unusual but we allow it as a possible resource
 * allocation strategy. Consider a real-time system where the natural
 * events of the system have different tolerances for jitter (jitter
 * refers to the distribution of the differences between when the
 * events are actually raised or noticed by the software and when they
 * should have really occurred according to time in the real-world).
 * Assume the system functions properly if event A is noticed or
 * raised within plus or minus 100 seconds of the actual time it
 * should occur but event B must be noticed or raised within 100
 * microseconds of its actual time. Further assume, without loss of
 * generality, that events A and B are periodic. An application could
 * then create two instances of PeriodicTimer based on two clocks. The
 * timer for event B should be based on a Clock which checks its queue
 * at least every 100 microseconds but the timer for event A could be
 * based on a Clock that checked its queue only every 100 seconds.
 * This use of two clocks reduces the queue size of the accurate clock
 * and thus queue management overhead is reduced.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public abstract class Clock {

    // This is used to avoid allocating time value when performing
    // conversions.
    private AbsoluteTime tempAbsTime = new AbsoluteTime();
    
    /**
     * There is always one clock object available: a realtime clock
     * that advances in sync with the external world> This is the
     * default Clock.
     *
     * @return an instance of the default Clock.
     */
    public static Clock getRealtimeClock() {
        return RealtimeClock.instance();
    }

    /**
     * Return the resolution of the clock -- the interval between ticks.
     *
     * @return A RelativeTime object representing the resolution of this.
     */
    public abstract RelativeTime getResolution();

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
    public abstract void setResolution(RelativeTime resolution);

    
    /**
     * Return the current time in a freshly allocated object.
     *
     * @return An AbsoluteTime object representing the current time.
     */
    public AbsoluteTime getTime() {
        AbsoluteTime absoluteTime = new AbsoluteTime();
        this.getTime(absoluteTime);
        return absoluteTime;
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
    public abstract void getTime(AbsoluteTime time);
 

    /**
     * Gets the <code>RealtiveTime</code> that represents the time
     * between the <em>now</em> of this <code>Clock</code>, and the
     * time represented by the <code>AbsoluteTime</code>. 
     *
     * @param time an <code>AbsoluteTime</code>
     * @return the resulting <code>RelativeTime</code>.
     */
    public RelativeTime relative(AbsoluteTime time) {
        RelativeTime result = new RelativeTime();
        this.relative(time, result);
        return result;
    }

    /**
     * Gets the <code>RealtiveTime</code> that represents the time
     * between the <em>now</em> of this <code>Clock</code>, and the
     * time represented by the <code>AbsoluteTime</code>. 
     *
     * @param time an <code>AbsoluteTime</code>
     * @param destination the destination for the resulting
     * <code>RelativeTime</code>.
     */
    public synchronized void relative(AbsoluteTime time,
                                      RelativeTime destination)
    {
        this.getTime(this.tempAbsTime);
        time.subtract(this.tempAbsTime, destination);
    }


    /**
     * Computes an absolute time that represent "this.getTime() + time".
     *
     * @param time the <code>RelativeTime</code> value
     * @return the resulting <code>AbsoluteTime</code> value
     */
    public AbsoluteTime absolute(RelativeTime time) {
        AbsoluteTime result = this.getTime();
        result.increment(time);
        return result;
    }

    /**
     * Computes an absolute time that represent "this.getTime() + time".
     *
     * @param time the <code>RelativeTime</code> value
     * @param destination the <code>AbsoluteTime</code> that will
     * contain the result
     */
    public void  absolute(RelativeTime time, AbsoluteTime destination) {
        this.getTime(destination);
        destination.increment(time);
    }

    /**
     * Creates a <code>PeriodicTimerImpl</code> with the given timing
     * characteristics.
     *
     * @param timer a <code>aPeriodicTimer</code> value representing
     * the owner ot this timer implementation.
     * @param start a <code>RelativeTime</code> value representing the
     * time from <b>now</b> at which the timer will expire for the
     * first time.
     * @param interval a <code>RelativeTime</code> value representing
     * the period of the timer
     * @return a <code>PeriodicTimerImpl</code> value
     */
    abstract PeriodicTimerImpl createPeriodicTimerImpl(PeriodicTimer timer,
                                                       RelativeTime  start,
                                                       RelativeTime  interval);

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
    abstract PeriodicTimerImpl createPeriodicTimerImpl(PeriodicTimer timer,
                                                       AbsoluteTime  start,
                                                       RelativeTime  interval);

    
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
    abstract OneShotTimerImpl createOneShotTimerImpl(OneShotTimer timer,
                                                     RelativeTime interval);

    
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
    abstract OneShotTimerImpl createOneShotTimerImpl(OneShotTimer timer,
                                                     AbsoluteTime time);
}
