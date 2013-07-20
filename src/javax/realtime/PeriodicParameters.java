// ************************************************************************
//    $Id: PeriodicParameters.java 467 2004-12-22 21:58:06Z mdeters $
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
 * This release parameter indicates that the public boolean {@link
 * RealtimeThread#waitForNextPeriod()} throws
 * IllegalThreadStateException method on the associated {@link
 * Schedulable} object will be unblocked at the start of each period. 
 * When a reference to a <code>PeriodicParameters</code> object is
 * given as a parameter to a constructor the
 * <code>PeriodicParameters</code> object becomes bound to the object
 * being created. Changes to the values in the
 * <code>PeriodicParameters</code> object affect the constructed
 * object. If given to more than one constructor then changes to the
 * values in the <code>PeriodicParameters</code> object affect all of
 * the associated objects. Note that this is a one-to-many
 * relationship and not a many-to-many.<p>
 *
 * <b>Caution:</b> This class is explicitly unsafe in multithreaded
 * situations when it is being changed. No synchronization is done. It
 * is assumed that users of this class who are mutating instances will
 * be doing their own synchronization at a higher level.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public class PeriodicParameters extends ReleaseParameters {

    protected HighResolutionTime start;
    protected RelativeTime period;


    /**
     * Creates a new <code>PeriodicParameters</code> instance.
     *
     * @param start Time at which the first period begins. If a {@link
     * RelativeTime} , this time is relative to the first time the
     * schedulable object becomes schedulable (schedulable time)
     * (e.g., when start() is called on a thread). If an {@link
     * AbsoluteTime} and it is before the schedulable time, start is
     * equivalent to the schedulable time.
     * @param period The period is the interval between successive
     * unblocks of {@link RealtimeThread#waitForNextPeriod()}. Must be
     * greater than zero when entering feasibility analysis.
     * @param cost Processing time per period. On implementations
     * which can measure the amount of time a schedulable object is
     * executed, this value is the maximum amount of time a
     * schedulable object receives per period. On implementations
     * which cannot measure execution time, this value is used as a
     * hint to the feasibility algorithm. On such systems it is not
     * possible to determine when any particular object exceeds or
     * will exceed cost time units in a period. Equivalent to
     * <code>RelativeTime(0,0)</code> if null.
     * @param deadline The latest permissible completion time measured
     * from the release time of the associated invocation of the
     * schedulable object. For a minimum implementation for purposes
     * of feasibility analysis, the deadline is equal to the period. 
     * Other implementations may use this parameter to compute
     * execution eligibility. If null, deadline will equal the period.
     * @param overrunHandler This handler is invoked if an invocation
     * of the schedulable object exceeds cost in the given period. Not
     * required for minimum implementation. If null, nothing happens
     * on the overrun condition.
     * @param missHandler This handler is invoked if the
     * <code>run()</code> method of the schedulable object is still
     * executing after the deadline has passed. Although minimum
     * implementations do not consider deadlines in feasibility
     * calculations, they must recognize variable deadlines and invoke
     * the miss handler as appropriate. If null, nothing happens on
     * the miss deadline condition.
     */
    public PeriodicParameters(HighResolutionTime start,
                              RelativeTime period,
                              RelativeTime cost,
                              RelativeTime deadline,
                              AsyncEventHandler overrunHandler,
                              AsyncEventHandler missHandler) {
        super(cost, deadline, overrunHandler, missHandler);
        this.start = start;
        this.period = period;
    }


    /**
     * Get the period value.
     *
     * @return a <code>RelativeTime</code> representing the period value.
     */
    public RelativeTime getPeriod() {
        return this.period;
    }

    /**
     * Set the period value.
     *
     * @param period The period is the interval between successive
     * unblocks of {@link RealtimeThread#waitForNextPeriod()}. Must be
     * greater than zero when entering feasibility analysis.
     */
    public void setPeriod(RelativeTime period) {
        this.period = period;
    }

    /**
     * Get the start time.
     *
     * @return a <code>HighResolutionTime</code> value
     */
    public HighResolutionTime getStart() {
        return this.start;
    }
    
    /**
     * Set the start time.
     *
     * @param start time at which the first period begins.
     */
    public void setStart(HighResolutionTime start) {
        this.start = start;
    }

    /**
     * Get the start time relative to the give clock
     *
     * @param c a <code>Clock</code> value
     * @return a <code>RelativeTime</code> value representing the
     * start time.
     */
    RelativeTime getStart(Clock c) {
        if (this.start instanceof RelativeTime)
            return (RelativeTime)this.start;
        else
            return c.relative((AbsoluteTime)this.start);
    }
    public boolean setIfFeasible(RelativeTime period,
                                 RelativeTime cost,
                                 RelativeTime deadline) {
        // FIXME: Implement this method once the scheduler is in
        // place.
        return false;
    }
}
