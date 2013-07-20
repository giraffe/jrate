// ************************************************************************
//    $Id: PooledAsyncEventHandler.java 467 2004-12-22 21:58:06Z mdeters $
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

import javax.realtime.util.PooledExecutor;
import javax.realtime.util.ShutdownExecutorException;

public class PooledAsyncEventHandler extends AsyncEventHandler {
    
    protected PooledExecutor executor;
    
    protected Runnable logic;
    
    // Handler Logic
    private class HandlerLogic implements Runnable {

        public void run() {
            do {
                PooledAsyncEventHandler.this.handleAsyncEventImpl();
            } while (PooledAsyncEventHandler.this.getAndDecrementPendingFireCount() > 1);
        }
    }

    HandlerLogic handlerLogic = new HandlerLogic();

    
    
    /**
     * Creates a new <code>PooledAsyncEventHandler</code> instance with the
     * specified parameters.
     *
     * @param schedulingParam a <code>SchedulingParameters</code> value
     * which will be associated with the constructed instance of this. 
     * If <code>null</code> this will be assigned the reference to the
     * {@link SchedulingParameters} of the current thread.
     * @param releaseParam a <code>ReleaseParameters</code> value
     * which will be associated with the constructed instance of this. 
     * If null this will have no {@link ReleaseParameters}.
     * @param memoryParam a <code>MemoryParameters</code> value which
     * will be associated with the constructed instance of this. If
     * null this will have no {@link MemoryParameters}.
     * @param memoryArea The {@link MemoryArea} for this
     * <code>PooledAsyncEventHandler</code>. If null, inherit the current
     * memory area at the time of construction. The initial memory
     * area must be a reference to a {@link ScopedMemory} or {@link
     * ImmortalMemory} object if <code>noheap</code> is
     * <code>true</code>.
     * @param groupParam A {@link ProcessingGroupParameters} object
     * to which this will be associated. If null this will not be
     * associated with any processing group.
     * @param noHeap A flag meaning, when <code>true</code>, that this
     * will have characteristics identical to a {@link
     * NoHeapRealtimeThread}. A false value means this will have
     * characteristics identical to a {@link RealtimeThread}. If
     * <code>true</code> and the current thread is not a {@link
     * NoHeapRealtimeThread} or a {@link RealtimeThread} executing
     * within a {@link ScopedMemory} or {@link ImmortalMemory} scope
     * then an {@link IllegalArgumentException} is thrown.
     * @param logic The <code>java.lang.Runnable</code> object whose
     * run is executed by handleAsyncEvent.
     * @exception IllegalArgumentException 
     */
    public PooledAsyncEventHandler(SchedulingParameters schedulingParam,
                                   ReleaseParameters releaseParam,
                                   MemoryParameters memoryParam,
                                   MemoryArea memoryArea,
                                   ProcessingGroupParameters groupParam,
                                   boolean noHeap,
                                   Runnable logic,
                                   PooledExecutor executor) throws IllegalArgumentException {
        this.logic = logic;
        this.executor = executor;
    }


    /**
     * If this handler was constructed using a separate Runnable logic
     * object, then that <code>Runnable</code> object s
     * <code>run</code> method is called; This method will be invoked
     * repeatedly while <code>fireCount</code> is greater than zero.
     *
     */
    protected void handleAsyncEventImpl() {
        if (this.logic != null)
            logic.run();
    }

    
    /**
     * Used by the asynchronous event mechanism, see {@link
     * AsyncEvent}. This method invokes
     * <code>handleAsyncEvent()</code> repeatedly while the fire count
     * is greater than zero. Applications cannot override this method
     * and should thus override <code>handleAsyncEvent()</code> in
     * subclasses with the logic of the handler.
     *
     */
    public void handleAsyncEvent() {
        try {
            this.executor.execute(handlerLogic);
        } catch (ShutdownExecutorException e) {
            e.printStackTrace();
        }
    }

    
    ////////////////////////////////////////////////////////////////////////
    // -- Method From javax.realtime.Schedulable --
    ////////////////////////////////////////////////////////////////////////
    
    /**
     * Add to the feasibility of the already set scheduler if the
     * resulting feasibility set is schedulable. If successful return
     * true, if not return false. If there is not an assigned
     * scheduler it will return false.
     *
     * @return If successful return true, if not return false. If
     * there is not an assigned scheduler it will return false.
     */
    public boolean addIfFeasible() {
        // TODO: Implement Me!!!
        return false;
    }

    
    /**
     * Inform the scheduler and cooperating facilities that the
     * resource demands (as expressed in the associated instances of
     * SchedulingParameters, ReleaseParameters,
     * MemoryParameters, and ProcessingGroupParameters) of this
     * instance of Schedulable will be considered in the feasibility
     * analysis of the associated Scheduler until further notice. 
     * Whether the resulting system is feasible or not, the addition
     * is completed.
     *
     * @return true If the resulting system is feasible.
     */
    public boolean addToFeasibility() {
        // TODO: Implement Me!!!
        return false;
    }
    

    /**
     * Get the {@link MemoryParameters} of this schedulable object.
     *
     * @return a  <code>MemoryParameters</code> value.
     */
    public MemoryParameters getMemoryParameters() {
        return this.executor.getMemoryParameters();
    }


    /**
     * Set the {@link MemoryParameters} for this schedulable object.
     *
     * @param memoryParam the <code>MemoryParameters</code> for this
     * schedulable object.
     */
    public void setMemoryParameters(MemoryParameters memoryParam) {
        this.executor.setMemoryParameters(memoryParam);
    }


    /**
     * Returns true if, after considering the value of the parameter,
     * the task set would still be feasible. In this case the values
     * of the parameters are changed. Returns false if, after
     * considering the value of the parameter, the task set would not
     * be feasible. In this case the values of the parameters are not
     * changed.
     *
     * @param memoryParam the <code>MemoryParameters</code> for this
     * schedulable object.
     * @return true if the requested change keeps the system feasible.
     */
    public boolean setMemoryParametersIfFeasible(MemoryParameters memoryParam) {
        // TODO: Implement Me!!!
        return this.executor.setMemoryParametersIfFeasible(memoryParam);
    }

    
    /**
     * Get the {@link ProcessingGroupParameters} of this
     * schedulable object.
     *
     * @return a <code>ProcessingGroupParameters</code> value
     */
    public ProcessingGroupParameters getProcessingGroupParameters() {
        return this.executor.getProcessingGroupParameters();
    }


    /**
     * Set the {@link ProcessingGroupParameters} for this schedulable object.
     *
     * @param groupParam a  <code>ProcessingGroupParameters</code> value
     */
    public void setProcessingGroupParameters(ProcessingGroupParameters groupParam) {
        this.executor.setProcessingGroupParameters(groupParam);
    }

    /**
     * Set the {@link ProcessingGroupParameters} of this schedulable object
     * only if the resulting task set is feasible.
     *
     * @param groupParam a <code>ProcessingGroupParameters</code> value
     * @return Returns true if, after considering the values of the
     * parameters, the task set would still be feasible. In this case
     * the values of the parameters are changed. Returns false if,
     * after considering the values of the parameters, the task set
     * would not be feasible. In this case the values of the
     * parameters are not changed.
     */
    public boolean setProcessingGroupParametersIfFeasible(ProcessingGroupParameters groupParam) {
        return this.executor.setProcessingGroupParametersIfFeasible(groupParam);
    }


    /**
     * Get the {@link ReleaseParameters} of this schedulable object.
     *
     * @return a <code>ReleaseParameters</code> value
     */
    public ReleaseParameters getReleaseParameters() {
        return this.executor.getReleaseParameters();
    }

    
    /**
     * Set the {@link ReleaseParameters}for this schedulable object.
     *
     * @param releaseParam a <code>ReleaseParameters</code> value
     */
    public void setReleaseParameters(ReleaseParameters releaseParam) {
        this.executor.setReleaseParameters(releaseParam);
    }


    /**
     * Returns true if, after considering the value of the parameter,
     * the task set would still be feasible. In this case the values
     * of the parameters are changed. Returns false if, after
     * considering the value of the parameter, the task set would not
     * be feasible. In this case the values of the parameters are not
     * changed. the resulting task set is feasible.
     *
     * @param releaseParam a <code>ReleaseParameters</code> value
     */
    public boolean setReleaseParametersIfFeasible(ReleaseParameters releaseParam) {
        return this.executor.setReleaseParametersIfFeasible(releaseParam);
    }
    
    /**
     * Get the {@link Scheduler} for this schedulable object.
     *
     * @return a <code>Scheduler</code> value
     */
    public Scheduler getScheduler() {
        return this.executor.getScheduler();
    }


    /**
     * Set the {@link Scheduler} for this schedulable object.
     *
     * @param scheduler the scheduler.
     * @exception IllegalExecutorStateException 
     */
    public void setScheduler(Scheduler scheduler) throws IllegalThreadStateException {
        this.executor.setScheduler(scheduler);
    }

    /**
     * Set the {@link Scheduler} for this schedulable object. 
     *
     * @param scheduler a <code>Scheduler</code> value
     * @param schedulingParam a <code>SchedulingParameters</code> value
     * @param releaseParam a <code>ReleaseParameters</code> value
     * @param memoryParam a <code>MemoryParameters</code> value
     * @param groupParam a <code>ProcessingGroupParameters</code> value
     * @exception IllegalExecutorStateException if an error occurs
     */
    public  void setScheduler(Scheduler scheduler,
                              SchedulingParameters schedulingParam,
                              ReleaseParameters releaseParam,
                              MemoryParameters memoryParam,
                              ProcessingGroupParameters groupParam)
        throws IllegalThreadStateException
    {
        this.executor.setScheduler(scheduler,
                                 schedulingParam,
                                 releaseParam,
                                 memoryParam,
                                 groupParam);
    }
    
    /**
     * Get the {@link SchedulingParameters} for this schedulable object.
     *
     * @return a <code>SchedulingParameters</code> value
     */
    public SchedulingParameters getSchedulingParameters() {
        return this.executor.getSchedulingParameters();
    }
    

    /**
     * Set the {@link SchedulingParameters} for this schedulable
     * object only if the resulting task set is feasible.
     *
     * @param schedulingParam a <code>SchedulingParameters</code> value
     */
    public void setSchedulingParameters(SchedulingParameters schedulingParam) {
        this.executor.setSchedulingParameters(schedulingParam);
    }


    /**
     * Set the {@link SchedulingParameters} for this schedulable object.
     *
     * @param schedulingParam a <code>SchedulingParameters</code> value
     * @return true if the change was feasible, false otherwise.
     */
    public boolean setSchedulingParametersIfFeasible(SchedulingParameters schedulingParam) {
        return this.executor.setSchedulingParametersIfFeasible(schedulingParam);
    }

    
    /**
     * Inform the scheduler and cooperating facilities that the
     * resource demands, as expressed in the associated instances of
     * {@link SchedulingParameters}, {@link ReleaseParameters}, {@link
     * MemoryParameters}, and {@link ProcessingGroupParameters}, of
     * this instance of {@link Schedulable} should no longer be
     * considered in the feasibility analysis of the associated {@link
     * Scheduler}. Whether the resulting system is feasible or not,
     * the subtrac-tion is completed.
     *
     * @return true If the resulting system is feasible.
     */
    public boolean removeFromFeasibility() {
        return this.executor.removeFromFeasibility();
    }
    

    // -- Implementation Specific Methods --
    public int executionEligibility() {
        if (this.executionEligibility != -1)
            return this.executionEligibility;
        
        this.executionEligibility = this.getScheduler().computeExecutionEligibility(this);
        return this.executionEligibility;
    }
    
    ////////////////////////////////////////////////////////////////////////////
    // -- End javax.realtime.Schedulable Methods --
    ////////////////////////////////////////////////////////////////////////////

}
