// ************************************************************************
//    $Id: ProcessingGroupParameters.java 467 2004-12-22 21:58:06Z mdeters $
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
 * This is associated with one or more schedulable objects for which
 * the system guarantees that the associated objects will not be given
 * more time per period than indicated by cost. For all threads with a
 * reference to an instance of <code>ProcessingGroupParameters
 * p</code> and a reference to an instance of {@link
 * AperiodicParameters} no more than <code>p.cost</code> will be
 * allocated to the execution of these threads in each interval of
 * time given by <code>p.period</code> after the time indicated by
 * <code>p.start</code>. When a reference to a
 * <code>ProcessingGroupParameters</code> object is given as a
 * parameter to a constructor the
 * <code>ProcessingGroupParameters</code> object becomes bound to the
 * object being created. Changes to the values in the
 * <code>ProcessingGroupParameters</code> object affect the
 * constructed object. If given to more than one constructor, then
 * changes to the values in the <code>ProcessingGroupParameters</code>
 * object affect all of the associated objects. Note that this is a
 * one-to-many relationship and not a many-to-many.<p>
 *
 * <b>Caution:</b> This class is explicitly unsafe in multithreaded
 * situations when it is being changed. No synchronization is done. It
 * is assumed that users of this class who are mutating instances will
 * be doing their own synchronization at a higher level.<p>
 *
 * <b>Caution:</b> The cost parameter time should be considered to be
 * measured against the target platform.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public class ProcessingGroupParameters {

    protected HighResolutionTime start;
    protected RelativeTime period;
    protected RelativeTime cost;
    protected RelativeTime deadline;
    protected AsyncEventHandler overrunHandler;
    protected AsyncEventHandler missHandler;
    
    /**
     * Creates a new <code>ProcessingGroupParameters</code> instance.
     *
     * @param start Time at which the first period begins.
     * @param period The period is the interval between successive
     * unblocks of <code>waitForNextPeriod()</code>.
     * @param cost Processing time per period.
     * @param deadline The latest permissible completion time measured
     * from the start of the current period. Changing the deadline
     * might not take effect after the expiration of the current
     * deadline.
     * @param overrunHandler This handler is invoked if the <code>run()</code>
     * method of the schedulable object of the previous period is
     * still executing at the start of the current period.
     * @param missHandler This handler is invoked if the <code>run()</code> method
     * of the schedulable object is still executing after the deadline
     * has passed.
     */
    public ProcessingGroupParameters(HighResolutionTime start,
                                     RelativeTime period,
                                     RelativeTime cost,
                                     RelativeTime deadline,
                                     AsyncEventHandler overrunHandler,
                                     AsyncEventHandler missHandler) {
        this.start = start;
        this.period = period;
        this.cost = cost;
        this.deadline = deadline;
        this.overrunHandler = overrunHandler;
        this.missHandler = missHandler;
    }


    /**
     * Get the cost value.
     *
     * @return a <code>RelativeTime</code> value representing the
     * cost.
     */
    public RelativeTime getCost() {
        return this.cost;
    }

    /**
     * Set the cost value.
     *
     * @param cost The schedulable objects with a reference to this
     * receive cumulatively no more than cost time per period on
     * implementations that can collect execution time per thread.
     */
    public void setCost(RelativeTime cost) {
        this.cost = cost;
    }

    /**
     * Get the cost overrun handler.
     *
     * @return An {@link AsyncEventHandler} object that is cost
     * overrun handler of this.
     */
    public AsyncEventHandler getCostOverrunHandler() {
        return this.overrunHandler;
    }

    /**
     * Set the cost overrun handler.
     *
     * @param handler This handler is invoked if the run() method of
     * the schedulable object of the previous period is still
     * executing at the start of the current period.
     */
    public void setCostOverrunHandler(AsyncEventHandler handler) {
        this.overrunHandler = handler;
    }

    
    /**
     * Get the deadline.
     *
     * @return a <code>RelativeTime</code> value that represent the deadline.
     */
    public RelativeTime getDeadline() {
        return this.deadline;
    }

    /**
     * Set the deadline.
     *
     * @param deadline The latest permissible completion time measured
     * from the start of the current period. Not used in a minimum
     * implementation. Other implementations may use this parameter to
     * compute execution eligibility. The default value is the same as
     * period .
     */
    public void setDeadline(RelativeTime deadline) {
        this.deadline = deadline;
    }


    /**
     * Get the deadline miss handler.
     *
     * @return the {@link AsyncEventHandler} object that is deadline
     * miss handler of this.
     */
    public AsyncEventHandler getDeadlineMissHandler() {
        return this.missHandler;
    }

    /**
     * Set the deadline miss handler.
     *
     * @param handler This handler is invoked if the run() method of
     * the schedulable object is still executing after the deadline
     * has passed.
     */
    public void setDeadlineMissHandler(AsyncEventHandler handler) {
        this.missHandler = handler;
    }
    
    /**
     * Get the period.
     *
     * @return Interval used to enforce allocation of processing
     * resources to the associated schedulable objects. Also used in
     * the feasibility analysis and admission control algorithms.
     */
    public RelativeTime getPeriod() {
        return this.period;
    }
    

    /**
     * Set the period.
     *
     * @param period Interval used to enforce allocation of processing
     * resources to the associated schedulable objects. Also used in
     * the feasibility analysis and admission control algorithms.
     */
    public void setPeriod(RelativeTime period) {
        this.period = period;
    }

    
    /**
     * Get the start time.
     *
     * @return a <code>HighResolutionTime</code> value that represent
     * the start time.
     */
    public HighResolutionTime getStart() {
        return this.start;
    }

    /**
     * Set the start time.
     *
     * @param start Time at which the first period begins
     */
    public void setStart(HighResolutionTime start) {
        this.start = start;
    }

    public boolean setIfFeasible(RelativeTime period,
                                 RelativeTime cost,
                                 RelativeTime deadline) {
        // FIXME: Implement Me!!!
        return false;
    }
}
