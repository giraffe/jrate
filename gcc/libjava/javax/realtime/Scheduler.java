// ************************************************************************
//    $Id: Scheduler.java 467 2004-12-22 21:58:06Z mdeters $
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
 * An instance of <code>Scheduler</code> manages the execution of
 * schedulable objects and may implement a feasibility algorithm. The
 * feasibility algorithm may determine if the known set of schedulable
 * objects, given their particular execution ordering (or priority
 * assignment), is a feasible schedule. Subclasses of
 * <code>Scheduler</code> are used for alternative scheduling policies
 * and should define an <code>instance()</code> class method to return
 * the default instance of the subclass. The name of the subclass
 * should be descriptive of the policy, allowing applications to
 * deduce the policy available for the scheduler obtained via
 * <code>public static Scheduler getDefaultScheduler()</code> (e.g.,
 * <code>EDFScheduler</code>).
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public abstract class Scheduler {

    protected static Scheduler defaultScheduler;
    
    protected Scheduler() {}


    /**
     * Inform the scheduler and cooperating facilities that the
     * resource demands (as expressed in the associated instances of
     * {@link SchedulingParameters}, {@link ReleaseParameters}, {@link
     * MemoryParameters} ,and {@link ProcessingGroupParameters})of
     * this instance of {@link Schedulable} will be considered in the
     * feasibility analysis of the associated {@link Scheduler} until
     * further notice. Whether the resulting system is feasible or
     * not, the addition is completed.
     *
     * @param schedulable the <code>Schedulable</code> entity to be
     * added to the feasibility set.
     * @return true If the resulting system is feasible.
     */
    protected abstract boolean addToFeasibility(Schedulable schedulable);


    /**
     * Trigger the execution of a schedulable object (like an
     * {@link AsyncEventHandler}).
     *
     * @param schedulable the schedulable object to make active.
     */
    public abstract void fireSchedulable(Schedulable schedulable);


    /**
     * Get the default scheduler for the system.
     *
     * @return Return a reference to the default scheduler.
     */
    public static Scheduler getDefaultScheduler() {
        return PriorityScheduler.instance();
    }

    /**
     * Get a string representing the scheduling policy implemented by
     * the scheduler.
     *
     * @return A <code>String</code> object which is the name of the
     * scheduling policy used by this.
     */
    public abstract String getPolicyName();


    /**
     * Returns true if and only if the system is able to satisfy the
     * constraints expressed in the release parameters of the existing
     * schedulable objects.
     *
     * @return true or false depending on whether the system is
     * feasible.
     */
    public abstract boolean isFeasible();


    /**
     * Inform the scheduler and cooperating facilities that the
     * resource demands, as expressed in the associated instances of
     * {@link SchedulingParameters}, {@link ReleaseParameters}, {@link
     * MemoryParameters},and {@link ProcessingGroupParameters} , of
     * this instance of {@link Schedulable} should no longer be
     * considered in the feasibility analysis of the associated
     * <code>Scheduler</code> . Whether the resulting system is
     * feasible or not, the subtraction is completed.
     *
     * @param schedulable a <code>Schedulable</code> object that has
     * to be removed from the task set that is considered for
     * feasibility analysis.
     * @return true If the resulting system is feasible.
     */
    protected abstract boolean removeFromFeasibility(Schedulable schedulable);


    /**
     * Set the default scheduler. This is the scheduler given to
     * instances of {@link RealtimeThread} when they are constructed. 
     * The default scheduler is set to the required {@link
     * PriorityScheduler} at startup.
     *
     * @param scheduler The <code>Scheduler</code> that becomes the
     * default scheduler assigned to new threads. If null nothing
     * happens.
     */
    public static void setDefaultScheduler(Scheduler scheduler) {
        defaultScheduler = scheduler;
    }

    /**
     * Returns true if, after considering the values of the
     * parameters, the task set would still be feasible. In this case
     * the values of the parameters are changed. Returns false if,
     * after considering the values of the parameters, the task set
     * would not be feasible. In this case the values of the
     * parameters are not changed.
     *
     * @param schedulable a <code>Schedulable</code> value
     * @param releaseParam a <code>ReleaseParameters</code> value
     * @param memoryParam a <code>MemoryParameters</code> value
     * @return true if the resulting system is feasible, false
     * otherwise.
     */
    public boolean setIfFeasible(Schedulable schedulable,
                                 ReleaseParameters releaseParam,
                                 MemoryParameters memoryParam) {
        // TODO: Implement me!!!
        return false;
    }


    /**
     * Returns true if, after considering the values of the
     * parameters, the task set would still be feasible. In this case
     * the values of the parameters are changed. Returns false if,
     * after considering the values of the parameters, the task set
     * would not be feasible. In this case the values of the
     * parameters are not changed.
     *
     * @param schedulable a <code>Schedulable</code> value
     * @param releaseParam a <code>ReleaseParameters</code> value
     * @param memoryParam a <code>MemoryParameters</code> value
     * @param groupParam a <code>ProcessingGroupParameters</code> value
     * @return true if the resulting system is feasible, false
     * otherwise.
     */
    public boolean setIfFeasible(Schedulable schedulable,
                                 ReleaseParameters releaseParam,
                                 MemoryParameters memoryParam,
                                 ProcessingGroupParameters groupParam) {
        // TODO: Implement me!!!
        return false;
    }


    // -- Implementation Specific Methods --

    // The follwing method are used to notify the scheduler when a
    // thread has started or completed it execution. The default
    // implementation does nothing, but schedulers can use these hook
    // to keep track of the active threads.
    void notifyThreadStart(RealtimeThread thread) { }

    void notifyThreadCompletion(RealtimeThread thread) { }


    /**
     * Makes sure that the thread has the right set of scheduling
     * parameters for this scheduler.
     *
     * @param schedulable a schedulable entity
     * @return true if the given thread has all the scheduling
     * parameters needed by the given scheduler.
     */
    public abstract boolean validateSchedulingParameters(Schedulable schedulable);


    /**
     * Computes the exectuion eligibility that is currently associated
     * to a schedulable object. The execution eligibility provide a
     * total ordering for the schedulable entities present in the system.
     *
     * @param schedulable a <code>Schedulable</code> for which the
     * execution eligibility has to be computed.
     * @return an <code>int</code> value representing the eligibility.
     */
    public abstract int computeExecutionEligibility(Schedulable schedulable);
}
