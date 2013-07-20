// ************************************************************************
//    $Id: PriorityScheduler.java 467 2004-12-22 21:58:06Z mdeters $
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

public class PriorityScheduler extends Scheduler {

    public static final int MAX_PRIORITY = getMaxPriorityImpl();
    public static final int MIN_PRIORITY = getMinPriorityImpl();
    public static final int NORM_PRIORITY = (MAX_PRIORITY - MIN_PRIORITY) / 2;

    protected static PriorityScheduler theInstance;
    
    protected PriorityScheduler() {
        super();
    }

    /**
     * Inform the scheduler and cooperating facilities that the
     * resource demands, as expressed in the associated instances of
     * {@link SchedulingParameters} , {@link ReleaseParameters},
     * {@link MemoryParameters} ,and {@link
     * ProcessingGroupParameters}, of this instance of {@link
     * Schedulable} will be considered in the feasibility analysis of
     * the associated {@link Scheduler} until further notice. Whether the
     * resulting system is feasible or not, the addition is completed.
     *
     * @param schedulable the <code>Schedulable</code> entity that has
     * to be considered hereon in the feasibility analysis.
     * @return true if the system is feasible, false otherwise.
     */
    protected boolean addToFeasibility(Schedulable schedulable) {
        // TODO: Implement Me!!!
        return false;
    }


    /**
     * Trigger the execution of a schedulable object (like an instance
     * of {@link AsyncEventHandler}).
     *
     * @param schedulable the  <code>Schedulable</code> object to make active.
     */
    public void fireSchedulable(Schedulable schedulable) {
        // TODO: Implement Me!!!
    }

    
    /**
     * Get the maximum priority available for a thread managed by
     * this scheduler.
     *
     * @return an <code>int</code> value representing the maximum
     * priority available.
     */
    public int getMaxPriority() {
        return MAX_PRIORITY;
    }
    
    /**
     * If the given thread is scheduled by the required
     * PriorityScheduler the maximum priority of the PriorityScheduler
     * is returned otherwise Thread.MAX_PRIORITY is returned.
     *
     * @param thread An instance of Thread. If null the maximum
     * priority of the required PriorityScheduler is returned.
     * @return paraman <code>int</code> value representing the maximum
     * priority.
     */
    public int getMaxPriority(Thread thread) {
        return this.priorityValueSelector(thread, Thread.MAX_PRIORITY, MAX_PRIORITY);
    }

    /**
     * Get the minimum priority available for a thread managed by this
     * scheduler.
     *
     * @return an <code>int</code> value representing the minumum
     * priority level available.
     */
    public int getMinPriority() {
        return MIN_PRIORITY;
    }


    /**
     * If the given thread is scheduled by the required
     * PriorityScheduler the minimum priority of the PriorityScheduler
     * is returned otherwise Thread.MIN_PRIORITY is returned.
     *
     * @param thread An instance of Thread. If null the minimum
     * priority of the required PriorityScheduler is returned.
     * @return an <code>int</code> value representing the minimum
     * priority.
     */
    public int getMinPriority(Thread thread) {
        return this.priorityValueSelector(thread, Thread.MIN_PRIORITY, MIN_PRIORITY);
    }


    /**
     * Returns the normal priority available for a thread managed by
     * this scheduler.
     *
     * @return an <code>int</code> value representing the normal
     * priority.
     */
    public int getNormPriority() {
        return NORM_PRIORITY;
    }
    

    /**
     * If the given thread is scheduled by the required
     * <code>PriorityScheduler</code> the normal priority of the
     * <code>PriorityScheduler</code> is returned otherwise
     * <code>Thread.NORM_PRIORITY</code> is returned.
     *
     * @param thread An instance of Thread. If null the normal
     * priority of the required <code>PriorityScheduler</code> is returned.
     * @return an <code>int</code> value representing the normal
     * priority.
     */
    public int getNormPriority(Thread thread) {
        return this.priorityValueSelector(thread, Thread.NORM_PRIORITY, NORM_PRIORITY);
    }


    /**
     * Used to determine the policy of the {@link Scheduler}
     *
     * @return A String object which is the name of the scheduling
     * policy used by this.
     */
    public String getPolicyName() {
        return "PRIORITY_FIFO_SCHED";
    }

    
    /**
     * Get the <code>PriorityScheduler</code> singleton instance.
     *
     * @return returns a reference to the
     * <code>PriorityScheduler</code> singleton.
     */
    public static synchronized PriorityScheduler instance() {
        if (theInstance != null)
            return theInstance;

        theInstance = new PriorityScheduler();
        return theInstance;
    }


    /**
     * Returns true if and only if the system is able to satisfy the
     * constraints expressed in the release parameters of the existing
     * schedulable objects.
     *
     * @return true if the system is feasible.
     */
    public boolean isFeasible() {
        // TODO: Implement Me!!!
        return false;
    }


    /**
     * Inform the scheduler and cooperating facilities that the
     * resource demands, as expressed in the associated instances of
     * {@link SchedulingParameters} , {@link ReleaseParameters},
     * {@link MemoryParameters} ,and {@link
     * ProcessingGroupParameters}, of this instance of {@link Schedulable}
     * should no longer be considered in the feasibility analysis of
     * the associated {@link Scheduler} . Whether the resulting system is
     * feasible or not, the subtrac-tion is completed.
     *
     * @param schedulable the <code>Schedulable</code> entity that has
     * to be removed from the set of task considered for
     * schedulability analysis.
     * @return true If the resulting system is feasible.
     */
    protected boolean removeFromFeasibility(Schedulable schedulable) {
        // TODO: Implement Me!!!
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
     * @param memParam a <code>MemoryParameters</code> value
     * @return a <code>boolean</code> value
     */
    public boolean setIfFeasible(Schedulable schedulable,
                                 ReleaseParameters releaseParam,
                                 MemoryParameters memParam) {
        // TODO: Implement Me!!!
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
    
    
    private int priorityValueSelector(Thread thread,
                                      int normPrio,
                                      int rtPrio)
    {
        int prio = normPrio;
        if (thread instanceof RealtimeThread) {
            Scheduler scheduler = ((RealtimeThread)thread).getScheduler(); 
            String policyName = scheduler.getPolicyName();
            if (policyName.equals(this.getPolicyName())) {
                prio = rtPrio;
            }
            scheduler = null;
            policyName = null;
        }
        return prio;
    }

    /**
     * Makes sure that the thread has the right set of scheduling
     * parameters for this scheduler.
     *
     * @param schedulable a schedulable entity
     * @return true if the given thread has all the scheduling
     * parameters needed by the given scheduler.
     */
    public boolean validateSchedulingParameters(Schedulable schedulable) {
        SchedulingParameters schedParams = schedulable.getSchedulingParameters();
        if (schedParams instanceof PriorityParameters)
            return true;
        else if (schedParams == null) {
            schedulable.setSchedulingParameters(new PriorityParameters(NORM_PRIORITY));
            return true;
        }
        return false;
    }

    ////////////////////////////////////////////////////////////////////////////
    //
    //     Implementation Specific methods
    //

    
    public void notifyThreadStart(RealtimeThread thread) {
        ExecutionEligibilityParameters threadEligibility =
            thread.getExecutionEligibilityParameters();
        PriorityParameters threadPrioParam =
            (PriorityParameters)thread.getSchedulingParameters();
        threadEligibility.setExecutionEligibility(threadPrioParam.getPriority());
        threadPrioParam = null;
        threadEligibility = null;
    }
    
    public int computeExecutionEligibility(Schedulable schedulable) {
        PriorityParameters prioParams =
            (PriorityParameters)schedulable.getSchedulingParameters();
        int e;
        if (prioParams != null)
            e = prioParams.getPriority();
        else
            e = NORM_PRIORITY;
        return e;
    }
    
    // -- Native methods --
    private static native int getMaxPriorityImpl();

    private static native int getMinPriorityImpl();

}
