// ************************************************************************
//    $Id: ReleaseParameters.java 416 2004-02-22 18:35:45Z corsaro $
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
 * The abstract top-level class for release characteristics of
 * threads. When a reference to a <code>ReleaseParameters</code>
 * object is given as a parameter to a constructor, the
 * <code>ReleaseParameters</code> object becomes bound to the object
 * being created. Changes to the values in the ReleaseParameters
 * object affect the constructed object. If given to more than one
 * constructor, then changes to the values in the
 * <code>ReleaseParameters</code> object affect all of the associated
 * objects. Note that this is a one-to-many relationship and not a
 * many-to-many. <p>
 *
 * <b>Caution:</b> This class is explicitly unsafe in multithreaded
 * situations when it is being changed. No synchronization is done. It
 * is assumed that users of this class who are mutating instances will
 * be doing their own synchronization at a higher level. <p>
 *
 * <b>Caution:</b> The <code>cost</code> parameter time should be considered to be
 * measured against the target platform.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public class ReleaseParameters {

    protected RelativeTime cost;
    protected RelativeTime deadline;
    protected AsyncEventHandler overrunHandler;
    protected AsyncEventHandler missHandler;
    
    protected ReleaseParameters() { }

    /**
     * Subclasses use this constructor to create a ReleaseParameters
     * type object. 
     *
     * @param cost Processing time units per interval. On
     * implementations which can measure the amount of time a
     * schedulable object is executed, this value is the maximum
     * amount of time a schedulable object receives per interval. On
     * implementations which cannot measure execution time, this value
     * is used as a hint to the feasibility algorithm. On such systems
     * it is not possible to determine when any particular object
     * exceeds cost. Equivalent to RelativeTime(0,0) if null.
     * @param deadline The latest permissible completion time measured
     * from the release time of the associated invocation of the
     * schedulable object. Changing the deadline might not take effect
     * after the expiration of the current deadline. More detail
     * provided in the subclasses.
     * @param overrunHandler This handler is invoked if an invocation
     * of the schedulable object exceeds cost. Not required for
     * minimum implementation. If null, nothing happens on the overrun
     * condition, and waitForNextPeriod returns false immediately and
     * updates the start time for the next period.
     * @param missHandler This handler is invoked if the
     * <code>run()</code> method of the schedulable object is still
     * executing after the deadline has passed. Although minimum
     * implementations do not consider deadlines in feasibility
     * calculations, they must recognize variable deadlines and invoke
     * the miss handler as appropriate. If null, nothing happens on
     * the miss deadline condition.
     */
    protected ReleaseParameters(RelativeTime cost,
                                RelativeTime deadline,
                                AsyncEventHandler overrunHandler,
                                AsyncEventHandler missHandler) {
        this.cost = cost;
        this.deadline = deadline;
        this.overrunHandler = overrunHandler;
        this.missHandler = missHandler;
    }

    /**
     * Get the cost value.
     *
     * @return the cost value.
     */
    public RelativeTime getCost() {
        return this.cost;
    }

    /**
     * Set the cost value.
     *
     * @param cost Processing time units per period or per minimum
     * interarrival interval. On implementations which can measure the
     * amount of time a schedulable object is executed, this value is
     * the maximum amount of time a schedulable object receives per
     * period or per minimum interarrival interval. On implementations
     * which cannot measure execution time, this value is used as a
     * hint to the feasibility algorithm. On such systems it is not
     * possible to determine when any particular object exceeds or
     * will exceed cost time units in a period or interval. Equivalent
     * to RelativeTime(0,0) if null.
     */
    public void setCost(RelativeTime cost) {
        this.cost = cost;
    }

    /**
     * Get the deadline value.
     *
     * @return the new deadline value.
     */
    public RelativeTime getDeadline() {
        return this.deadline;
    }

    /**
     * Set the deadline value.
     *
     * @param deadline The latest permissible completion time measured
     * from the release time of the associated invocation of the
     * schedulable object. For a minimum implementation for purposes
     * of feasibility analysis, the deadline is equal to the period or
     * minimum interarrival interval. Other implementations may use
     * this parameter to compute execution eligibility.
     */
    public void setDeadline(RelativeTime deadline) {
        this.deadline = deadline;
    }


    /**
     * Get the cost overrun handler.
     *
     * @return the overrun handler.
     */
    public AsyncEventHandler getCostOverrunHandler() {
        return this.overrunHandler;
    }


    /**
     * Set the cost cost overrun handler.
     *
     * @param handler This handler is invoked if an invocation of the
     * schedulable object exceeds cost. Not required for minimum
     * implementation. See comments in <code>setCost()</code> .
     */
    public void setCostOverrunHandler(AsyncEventHandler handler) {
        this.overrunHandler = handler;
    }


    /**
     * Get the deadline miss handler.
     *
     * @return the deadline miss handler.
     */
    public AsyncEventHandler getDeadlineMissHandler() {
        return this.missHandler;
    }


    /**
     * Set the deadline handler miss.
     *
     * @param handler This handler is invoked if the
     * <code>run()</code> method of the schedulable object is still
     * executing after the deadline has passed. Although minimum
     * implementations do not consider deadlines in feasibility
     * calculations, they must recognize variable deadlines and invoke
     * the miss handler as appropriate.
     */
    public void setDeadlineMissHandler(AsyncEventHandler handler) {
        this.missHandler = handler;
    }

    /**
     * Returns true if, after considering the values of the
     * parameters, the task set would still be feasible. In this case
     * the values of the parameters are changed. Returns false if,
     * after considering the values of the parameters, the task set
     * would not be feasible. In this case the values of the
     * parameters are not changed.
     *
     * @param cost a <code>RelativeTime</code> value
     * @param deadline a <code>RelativeTime</code> value
     * @return a <code>boolean</code> value
     */
    public boolean setIfFeasible(RelativeTime cost, RelativeTime deadline) {
        // FIXME: Implements this once the scheduler is in place.
        return false;
    }
}
