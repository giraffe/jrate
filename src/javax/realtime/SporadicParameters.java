// ************************************************************************
//    $Id: SporadicParameters.java 468 2004-12-22 22:09:37Z mdeters $
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
 * A notice to the scheduler that the associated schedulable object s
 * run method will be released aperiodically but with a minimum time
 * between releases. When a reference to a SporadicParameters object
 * is given as a parameter to a constructor, the SporadicParameters
 * object becomes bound to the object being created. Changes to the
 * values in the SporadicParameters object affect the constructed
 * object. If given to more than one constructor, then changes to the
 * values in the SporadicParameters object affect all of the
 * associated objects. Note that this is a one-to-many relationship
 * and not a many-to-many.<p>
 *
 * <b>Caution:</b> This class is explicitly unsafe in multithreaded
 * situations when it is being changed. No synchronization is done. It
 * is assumed that users of this class who are mutating instances will
 * be doing their own synchronization at a higher level.<p>
 *
 * Correct initiation of the deadline miss and cost overrun handlers
 * requires that the underlying system know the arrival time of each
 * sporadic task. For an instance of {@link RealtimeThread} the
 * arrival time is the time at which the <code>start()</code> is
 * invoked. For other instances of {@link Schedulable} it may be required
 * for the implementation to save the arrival times. For instances of
 * {@link AsyncEventHandler} with a ReleaseParameters54 type of
 * SporadicParameters the implementation must maintain a queue of
 * monotonically increasing arrival times which correspond to the
 * execution of the fire() method of the instance of AsyncEvent181
 * bound to the instance of {@link AsyncEventHandler}.<p>
 *
 * This class allows the application to specify one of four possible
 * behaviors that indicate what to do if an arrival occurs that is
 * closer in time to the previous arrival than the value given in this
 * class as minimum interarrival time, what to do if, for any reason,
 * the queue overflows, and the initial size of the queue.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public class SporadicParameters extends AperiodicParameters {

    protected RelativeTime minInterarrival;

    protected String queuePolicy = arrivalTimeQueueOverflowSave;

    protected String mitPolicy = mitViolationSave;

    protected int intialQueueLength = 5;
    
    /**
     * If an arrival time occurs and should be queued but the queue
     * already holds a number of times equal to the initial queue
     * length defined by this then the fire() method shall throw a
     * {@link ResourceLimitError} .If thearrival time is a result of a
     * happening to which the instance of {@link AsyncEventHandler} is
     * bound then the arrival time is ignored.
     *
     */
    public static final String arrivalTimeQueueOverflowExcpt = "ATQOE";


    /**
     * If an arrival time occurs and should be queued but the queue
     * already holds a number of times equal to the initial queue
     * length defined by this then the arrival time is ignored.
     *
     */
    public static final String arrivalTimeQueueOverflowIgnore = "ATQOI";


    /**
     * If an arrival time occurs and should be queued but the queue
     * already holds a number of times equal to the initial queue
     * length defined by this then the previous arrival time is
     * overwritten by the new arrival time. However, the new time is
     * adjusted so that the difference between it and the previous
     * time is equal to the minimum interarrival time.
     *
     */
    public static final String arrivalTimeQueueOverflowReplace = "ATQOR";


    /**
     * If an arrival time occurs and should be queued but the queue
     * already holds a number of times equal to the initial queue
     * length defined by this then the queue is lengthened and the
     * arrival time is saved.
     *
     */
    public static final String arrivalTimeQueueOverflowSave = "ATQOS";


    /**
     * If an arrival time for any instance of Schedulable41 which has
     * this as its instance of {@link ReleaseParameters} occurs at a time
     * less then the mini-mum interarrival time defined here then the
     * fire() method shall throw {@link MITViolationException}. If the
     * arrival time is a result of a happen-ing to which the instance
     * of {@link AsyncEventHandler} is bound then the arrival time is
     * ignored.
     *
     */
    public static final String mitViolationExcept = "MITVE";


    /**
     * If an arrival time for any instance of {@link Schedulable} which has
     * this as its instance of {@link ReleaseParameters} occurs at a time
     * less then the mini-mum interarrival time defined here then the
     * new arrival time is ignored.
     *
     */
    public static final String mitViolationIgnore = "MITVI";


    /**
     * If an arrival time for any instance of {@link Schedulable} which has
     * this as its instance of {@link ReleaseParameters} occurs at a time
     * less then the mini-mum interarrival time defined here then, if
     * necessary, the previous arrival time may be overwritten with
     * the new arrival time.
     *
     */
    public static final String mitViolationReplace = "MITVR";


    /**
     * If an arrival time for any instance of {@link Schedulable} which has
     * this as its instance of {@link ReleaseParameters} occurs at a time
     * less then the mini-mum interarrival time defined here then the
     * new arrival time is added to the queue of arrival times. 
     * However, the new time is adjusted so that the differ-ence
     * between it and the previous time is equal to the minimum
     * interarrival time.
     *
     */
    public static final String mitViolationSave = "MITVS";


    /**
     * Creates a new <code>SporadicParameters</code> instance.
     *
     * @param minInterarrival The release times of the schedulable
     * object will occur no closer than this interval. Must be greater
     * than zero when entering feasibility analysis.
     * @param cost Processing time per minimum interarrival interval. 
     * On implementations which can measure the amount of time a
     * schedulable object is executed, this value is the maximum
     * amount of time a schedulable object receives per interval. On
     * implementations which cannot measure execution time, this value
     * is used as a hint to the feasibility algorithm. On such systems
     * it is not possible to determine when any particular object
     * exceeds cost. Equivalent to RelativeTime(0,0) if null.
     * @param deadline The latest permissible completion time measured
     * from the release time of the associated invocation of the
     * schedulable object. For a minimum implementation for purposes
     * of feasibility analysis, the deadline is equal to the minimum
     * interarrival interval. Other implementations may use this
     * parameter to compute execution eligibility. If null, deadline
     * will equal the minimum interarrival time.
     * @param overrunHandler This handler is invoked if an invocation
     * of the schedulable object exceeds cost. Not required for
     * minimum implementation. If null, nothing happens on the overrun
     * condition.
     * @param missHandler This handler is invoked if the run() method
     * of the schedulable object is still executing after the deadline
     * has passed. Although minimum implementations do not consider
     * deadlines in feasibility calculations, they must recognize
     * variable deadlines and invoke the miss handler as appropriate. 
     * If null, nothing happens on the miss deadline condition.<p>
     *
     * <b>Implementation Note:</b> By default the Queue Overflow, and
     * the Minimum Interarrival Time Violation are set to
     * <em>save</em>.
     */
    public SporadicParameters(RelativeTime minInterarrival,
                              RelativeTime cost,
                              RelativeTime deadline,
                              AsyncEventHandler overrunHandler,
                              AsyncEventHandler missHandler) {
        super(cost, deadline, overrunHandler, missHandler);
        this.minInterarrival = minInterarrival;
    }


    /**
     * Get the behavior of the arrival time queue in the event of an
     * overflow.
     *
     * @return a <code>String</code> representing the behaviour
     * currently set.
     */
    public String getArrivalTimeQueueOverflowBehavior() {
        return this.queuePolicy;
    }


    /**
     * Set the behavior of the arrival time queue in the case where
     * the insertion of a new element would make the queue size
     * greater than the initial size given in this.
     *
     * @param behavior a string representing the desired behavior.
     */
    public void setArrivalTimeQueueOverflowBehavior(String behavior) {
        this.queuePolicy = behavior;
    }
    
    /**
     * Get the initial number of elements the arrival time queue can
     * hold.
     *
     * @return the initial number of elements the arrival time queue can hold.
     */
    public int getInitialArrivalTimeQueueLength() {
        return this.intialQueueLength;
    }


    /**
     * Set the initial number of elements the arrival time queue can
     * hold without lengthening the queue.
     *
     * @param initial the initial lenght of the queue.
     */
    public void getInitialArrivalTimeQueueLength(int initial) {
        this.intialQueueLength = initial;

    }
        
    /**
     * Get the minimum interarrival time.
     *
     * @return the minimum interarrival time.
     */
    public RelativeTime getMinimumInterarrival() {
        return this.minInterarrival;
    }

    /**
     * Set the minimum interarrival time.
     *
     * @param mit The release times of the schedulable object will
     * occur no closer than this interval. Must be greater than zero
     * when entering feasibility analysis.
     */
    public void setMinimumInterarrival(RelativeTime mit) {
        this.minInterarrival = mit; 
    }

    
    /**
     * Get the arrival time queue behavior in the event of a minimum
     * interarrival time violation.
     *
     * @return the arrival time queue behavior.
     */
    public String getMitViolationBehavior() {
        return this.mitPolicy;
    }


    /**
     * Set the behavior of the arrival time queue in the case where
     * the new arrival time is closer to the previous arrival time
     * than the minimum interarrival time given in this.
     *
     * @param behavior a string representin the desired behaviour.
     */
    public void setInitialArrivalTimeQueueLength(String behavior) {
        this.mitPolicy = behavior;
    }


    /**
     * Returns true if, after considering the values of the
     * parameters, the task set would still be feasible. In this case
     * the values of the parameters are changed. Returns false if,
     * after considering the values of the parameters, the task set
     * would not be feasible. In this case the values of the
     * parameters are not changed.
     *
     * @param interarrival The release times of the schedulable object
     * will occur no closer than this interval. Must be greater than
     * zero when entering feasibility analysis.
     * @param cost Processing time per minimum interarrival interval. 
     * On implementations which can measure the amount of time a
     * schedulable object is executed, this value is the maximum
     * amount of time a schedulable object receives per interval. On
     * implementations which cannot measure execution time, this value
     * is used as a hint to the feasibility algorithm. On such systems
     * it is not possible to determine when any particular object
     * exceeds cost. Equivalent to RelativeTime(0,0) if null.
     * @param deadline The latest permissible completion time measured
     * from the release time of the associated invocation of the
     * schedulable object. For a minimum implementation for purposes
     * of feasibility analysis, the deadline is equal to the minimum
     * interarrival interval. Other implementations may use this
     * parameter to compute execution eligibility. If null, deadline
     * will equal the minimum interarrival time.
     * @return True if the new parameters can be changed while keeping
     * the schedule feasible.
     */
    public boolean setIfFeasible(RelativeTime interarrival,
                                 RelativeTime cost,
                                 RelativeTime deadline) {
        // FIXME: Implement me!!!
        return false;
    }
}
