// ************************************************************************
//    $Id: BoundAsyncEventHandler.java 467 2004-12-22 21:58:06Z mdeters $
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
 * A bound asynchronous event handler is an asynchronous event handler
 * that is permanently bound to a thread. Bound asynchronous event
 * handlers are meant for use in situations where the added timeliness
 * is worth the overhead of binding the handler to a thread.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public class BoundAsyncEventHandler extends AsyncEventHandler {
    
    protected RealtimeThread thread;

    protected boolean active = false;

    protected Runnable logic;
    
    // Handler Logic
    private class HandlerLogic implements Runnable {

        private boolean active = true;
        private boolean eventNotified = false;
        
        public synchronized void waitEvent() {
            while (!this.eventNotified && this.active) {
                try {
                    this.wait();
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
            this.eventNotified = false;
        }
        
        public synchronized void  notifyEvent() {
            this.eventNotified = true;
            this.notify();
        }
        
        public synchronized void deactivate() {
            this.active = false;
            this.notify();
        }
        
        public void run() {
            do {
                this.waitEvent();
                if (!active) {
                    return;
                }

                do {
                    BoundAsyncEventHandler.this.handleAsyncEventImpl();
                } while (BoundAsyncEventHandler.this.getAndDecrementPendingFireCount() > 1);
            } while (active);
        }
    }

    HandlerLogic handlerLogic = new HandlerLogic();
        
    /**
     * Creates a new <code>BoundAsyncEventHandler</code> instance whose
     * {@link SchedulingParameters} are inherited from the current thread
     * and does not have either {@link ReleaseParameters} or
     * {@link MemoryParameters}.
     *
     */
    public BoundAsyncEventHandler() {
        this(null, null, null, null, null, false, null);
    }

    /**
     * Creates a new <code>BoundAsyncEventHandler</code> instance whose
     * parameters are inherited from the current thread, if it is a
     * {@link RealtimeThread} ,or null other wise.
     *
     * @param noHeap A flag meaning, when <code>true</code>, that this
     * will have characteristics identical to a {@link
     * NoHeapRealtimeThread}. A false value means this will have
     * characteristics identical to a {@link RealtimeThread}. If
     * <code>true</code> and the current thread is not a {@link
     * NoHeapRealtimeThread} or a {@link RealtimeThread} executing
     * within a {@link ScopedMemory} or {@link ImmortalMemory} scope
     * then an {@link IllegalArgumentException} is thrown.
     */
    public BoundAsyncEventHandler(boolean noHeap) {
        this(null, null, null, null, null, noHeap, null);
    } 

    /**
     * Creates a new <code>BoundAsyncEventHandler</code> instance whose
     * parameters are inherited from the current thread, if it is a
     * {@link RealtimeThread}, or null otherwise.
     *
     * @param logic The <code>java.lang.Runnable</code> object whose
     * run is executed by handleAsyncEvent.
     */
    public BoundAsyncEventHandler(Runnable logic) {
        this(null, null, null, null, null, false, logic);
    }


    /**
     * Creates a new <code>BoundAsyncEventHandler</code> instance whose
     * parameters are inherited from the current thread, if it is a
     * {@link RealtimeThread}, or null otherwise.
     *
     * @param noHeap A flag meaning, when <code>true</code>, that this
     * will have characteristics identical to a {@link
     * NoHeapRealtimeThread}. A false value means this will have
     * characteristics identical to a {@link RealtimeThread}. If
     * <code>true</code> and the current thread is not a {@link
     * NoHeapRealtimeThread} or a {@link RealtimeThread} executing
     * within a {@link ScopedMemory} or {@link ImmortalMemory} scope
     * then an {@link IllegalArgumentException} is thrown.
     * @param logic -The <code>java.lang.Runnable</code> object whose
     * run is executed by handleAsyncEvent.
     * @exception IllegalArgumentException 
     */
    public BoundAsyncEventHandler(boolean noHeap, Runnable logic) throws IllegalArgumentException {
        this(null, null, null, null, null, noHeap, logic);
    }


    /**
     * Creates a new <code>BoundAsyncEventHandler</code> instance with the
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
     * <code>BoundAsyncEventHandler</code>. If null, inherit the current
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
     * @exception IllegalArgumentException 
     */
    public BoundAsyncEventHandler(SchedulingParameters schedulingParam,
                                  ReleaseParameters releaseParam,
                                  MemoryParameters memoryParam,
                                  MemoryArea memoryArea,
                                  ProcessingGroupParameters groupParam,
                                  boolean noHeap) throws IllegalArgumentException {

        this(schedulingParam, releaseParam, memoryParam, memoryArea, groupParam, noHeap, null);
    }


    
    /**
     * Creates a new <code>BoundAsyncEventHandler</code> instance with the
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
     * <code>BoundAsyncEventHandler</code>. If null, inherit the current
     * memory area at the time of construction. The initial memory
     * area must be a reference to a {@link ScopedMemory} or {@link
     * ImmortalMemory} object if <code>noheap</code> is
     * <code>true</code>.
     * @param groupParam A {@link ProcessingGroupParameters} object
     * to which this will be associated. If null this will not be
     * associated with any processing group.
     * @param logic The <code>java.lang.Runnable</code> object whose
     * run is executed by handleAsyncEvent.
     * @exception IllegalArgumentException 
     */
    public BoundAsyncEventHandler(SchedulingParameters schedulingParam,
                                  ReleaseParameters releaseParam,
                                  MemoryParameters memoryParam,
                                  MemoryArea memoryArea,
                                  ProcessingGroupParameters groupParam,
                                  Runnable logic) throws IllegalArgumentException {
        
        this(schedulingParam, releaseParam, memoryParam, memoryArea, groupParam, false, logic);
    }
    
    
    /**
     * Creates a new <code>BoundAsyncEventHandler</code> instance with the
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
     * <code>BoundAsyncEventHandler</code>. If null, inherit the current
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
    public BoundAsyncEventHandler(SchedulingParameters schedulingParam,
                                  ReleaseParameters releaseParam,
                                  MemoryParameters memoryParam,
                                  MemoryArea memoryArea,
                                  ProcessingGroupParameters groupParam,
                                  boolean noHeap,
                                  Runnable logic) throws IllegalArgumentException {
        if (noHeap)
            this.thread = new NoHeapRealtimeThread(schedulingParam,
                                                   releaseParam,
                                                   memoryParam,
                                                   memoryArea,
                                                   groupParam,
                                                   this.handlerLogic);
        else
            this.thread = new RealtimeThread(schedulingParam,
                                             releaseParam,
                                             memoryParam,
                                             memoryArea,
                                             groupParam,
                                             this.handlerLogic);
        this.thread.setDaemon(true);
        this.logic = logic;
    }


    /**
     * If this handler was constructed using a separate Runnable logic
     * object, then that <code>Runnable</code> object s
     * <code>run</code> method is called; This method will be invoked
     * repeatedly while <code>fireCount</code> is greater than zero.
     *
     */
    public void handleAsyncEvent() {
        if (this.active)
            this.handlerLogic.notifyEvent();
        else {
            this.thread.start();
            this.handlerLogic.notifyEvent();
            this.active = true;
        }
    }

    protected void handleAsyncEventImpl() {
        if (this.logic != null)
            this.logic.run(); 
    }
    

    /**
     * This method is provided to give more control over the time at
     * which the thread bound with this {@link AsyncEventHandler} is
     * started. If this method is not invoked to explicitly start the
     * dispatch thread, it will then be started upon arrival of the first event.
     *
     */
    public void activate() {
        this.thread.start();
        this.active = true;
    }

    public void deactivate() {
        this.active = false;
        this.handlerLogic.deactivate();
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
        return this.thread.getMemoryParameters();
    }


    /**
     * Set the {@link MemoryParameters} for this schedulable object.
     *
     * @param memoryParam the <code>MemoryParameters</code> for this
     * schedulable object.
     */
    public void setMemoryParameters(MemoryParameters memoryParam) {
        this.thread.setMemoryParameters(memoryParam);
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
        return this.thread.setMemoryParametersIfFeasible(memoryParam);
    }

    
    /**
     * Get the {@link ProcessingGroupParameters} of this
     * schedulable object.
     *
     * @return a <code>ProcessingGroupParameters</code> value
     */
    public ProcessingGroupParameters getProcessingGroupParameters() {
        return this.thread.getProcessingGroupParameters();
    }


    /**
     * Set the {@link ProcessingGroupParameters} for this schedulable object.
     *
     * @param groupParam a  <code>ProcessingGroupParameters</code> value
     */
    public void setProcessingGroupParameters(ProcessingGroupParameters groupParam) {
        this.thread.setProcessingGroupParameters(groupParam);
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
        return this.thread.setProcessingGroupParametersIfFeasible(groupParam);
    }


    /**
     * Get the {@link ReleaseParameters} of this schedulable object.
     *
     * @return a <code>ReleaseParameters</code> value
     */
    public ReleaseParameters getReleaseParameters() {
        return this.thread.getReleaseParameters();
    }

    
    /**
     * Set the {@link ReleaseParameters}for this schedulable object.
     *
     * @param releaseParam a <code>ReleaseParameters</code> value
     */
    public void setReleaseParameters(ReleaseParameters releaseParam) {
        this.thread.setReleaseParameters(releaseParam);
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
        return this.thread.setReleaseParametersIfFeasible(releaseParam);
    }
    
    /**
     * Get the {@link Scheduler} for this schedulable object.
     *
     * @return a <code>Scheduler</code> value
     */
    public Scheduler getScheduler() {
        return this.thread.getScheduler();
    }


    /**
     * Set the {@link Scheduler} for this schedulable object.
     *
     * @param scheduler the scheduler.
     * @exception IllegalThreadStateException 
     */
    public void setScheduler(Scheduler scheduler) throws IllegalThreadStateException {
        this.thread.setScheduler(scheduler);
    }

    /**
     * Set the {@link Scheduler} for this schedulable object. 
     *
     * @param scheduler a <code>Scheduler</code> value
     * @param schedulingParam a <code>SchedulingParameters</code> value
     * @param releaseParam a <code>ReleaseParameters</code> value
     * @param memoryParam a <code>MemoryParameters</code> value
     * @param groupParam a <code>ProcessingGroupParameters</code> value
     * @exception IllegalThreadStateException if an error occurs
     */
    public  void setScheduler(Scheduler scheduler,
                              SchedulingParameters schedulingParam,
                              ReleaseParameters releaseParam,
                              MemoryParameters memoryParam,
                              ProcessingGroupParameters groupParam)
        throws IllegalThreadStateException
    {
        this.thread.setScheduler(scheduler,
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
        return this.thread.getSchedulingParameters();
    }
    

    /**
     * Set the {@link SchedulingParameters} for this schedulable
     * object only if the resulting task set is feasible.
     *
     * @param schedulingParam a <code>SchedulingParameters</code> value
     */
    public void setSchedulingParameters(SchedulingParameters schedulingParam) {
        this.thread.setSchedulingParameters(schedulingParam);
    }


    /**
     * Set the {@link SchedulingParameters} for this schedulable object.
     *
     * @param schedulingParam a <code>SchedulingParameters</code> value
     * @return true if the change was feasible, false otherwise.
     */
    public boolean setSchedulingParametersIfFeasible(SchedulingParameters schedulingParam) {
        return this.thread.setSchedulingParametersIfFeasible(schedulingParam);
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
        return this.thread.removeFromFeasibility();
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
