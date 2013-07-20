// ************************************************************************
//    $Id: ThreadedAsyncEventHandler.java 467 2004-12-22 21:58:06Z mdeters $
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
 * This class is one of the different implementation available for the
 * {@link AsyncEventHandler}. This specific implementation is not not
 * permanently bound to a thread, but a thread is created on demand
 * each time an event firing has to be handled. 
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @see javax.realtime.AsyncEventHandler
 * @version 1.0
 */
public class ThreadedAsyncEventHandler extends AsyncEventHandler {

    protected MemoryParameters memoryParam;
    protected ReleaseParameters releaseParam;
    protected SchedulingParameters schedulingParam;
    protected MemoryArea memoryArea;
    protected ProcessingGroupParameters groupParam;

    protected Scheduler scheduler;

    protected boolean noHeap = false;
    protected Runnable logic;

    protected int fireCount;
    
    // Handler Logic
    private class HanderLogic implements Runnable {
        public void run() {
            do {
                ThreadedAsyncEventHandler.this.handleAsyncEventImpl();
            } while (ThreadedAsyncEventHandler.this.getAndDecrementPendingFireCount() > 1);
        }
    }
        
    protected HanderLogic handlerLogic = new HanderLogic();


    /**
     * Creates a new <code>ThreadedAsyncEventHandler</code> instance whose
     * {@link SchedulingParameters} are inherited from the current thread
     * and does not have either {@link ReleaseParameters} or
     * {@link MemoryParameters}.
     *
     */
    public ThreadedAsyncEventHandler() {
        this(null, null, null, null, null, false, null);
    }

    /**
     * Creates a new <code>ThreadedAsyncEventHandler</code> instance whose
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
    public ThreadedAsyncEventHandler(boolean noHeap) {
        this(null, null, null, null, null, noHeap, null);
    } 

    /**
     * Creates a new <code>ThreadedAsyncEventHandler</code> instance whose
     * parameters are inherited from the current thread, if it is a
     * {@link RealtimeThread}, or null otherwise.
     *
     * @param logic The <code>java.lang.Runnable</code> object whose
     * run is executed by handleAsyncEvent.
     */
    public ThreadedAsyncEventHandler(Runnable logic) {
        this(null, null, null, null, null, false, logic);
    }


    /**
     * Creates a new <code>ThreadedAsyncEventHandler</code> instance whose
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
    public ThreadedAsyncEventHandler(boolean noHeap, Runnable logic) throws IllegalArgumentException {
        this(null, null, null, null, null, noHeap, logic);
    }


    /**
     * Creates a new <code>ThreadedAsyncEventHandler</code> instance with the
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
     * <code>ThreadedAsyncEventHandler</code>. If null, inherit the current
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
    public ThreadedAsyncEventHandler(SchedulingParameters schedulingParam,
                             ReleaseParameters releaseParam,
                             MemoryParameters memoryParam,
                             MemoryArea memoryArea,
                             ProcessingGroupParameters groupParam,
                             boolean noHeap) throws IllegalArgumentException {

        this(schedulingParam, releaseParam, memoryParam, memoryArea, groupParam, noHeap, null);
    }


    
    /**
     * Creates a new <code>ThreadedAsyncEventHandler</code> instance with the
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
     * <code>ThreadedAsyncEventHandler</code>. If null, inherit the current
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
    public ThreadedAsyncEventHandler(SchedulingParameters schedulingParam,
                             ReleaseParameters releaseParam,
                             MemoryParameters memoryParam,
                             MemoryArea memoryArea,
                             ProcessingGroupParameters groupParam,
                             Runnable logic) throws IllegalArgumentException {

        this(schedulingParam, releaseParam, memoryParam, memoryArea, groupParam, false, logic);
    }
    

    /**
     * Creates a new <code>ThreadedAsyncEventHandler</code> instance with the
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
     * <code>ThreadedAsyncEventHandler</code>. If null, inherit the current
     * memory area at the time of construction. The initial memory
     * area must be a reference to a {@link ScopedMemory} or {@link
     * ImmortalMemory} object if <code>noheap</code> is
     * <code>true</code>.
     * @param groupParam A {@link ProcessingGroupParameters} object
     * to which this will be associated. If null this will not be
     * associated with any processing group.
     * @param nonHeap A flag meaning, when <code>true</code>, that this
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
    public ThreadedAsyncEventHandler(SchedulingParameters schedulingParam,
                                     ReleaseParameters releaseParam,
                                     MemoryParameters memoryParam,
                                     MemoryArea memoryArea,
                                     ProcessingGroupParameters groupParam,
                                     boolean nonHeap,
                                     Runnable logic) throws IllegalArgumentException {
        
        RealtimeThread currentThread = null;
        try {
            currentThread = RealtimeThread.currentRealtimeThread();
        }
        catch (ClassCastException e) {
            currentThread = null;
        }
        
        if (schedulingParam == null & currentThread != null) {
            this.schedulingParam = currentThread.getSchedulingParameters();
        }
        else if (schedulingParam != null)
            this.schedulingParam = schedulingParam;
        
        this.releaseParam = releaseParam;
        this.memoryParam = memoryParam;

        // TODO: Check to see if the calling thread is NoHeapRealtime,
        // or if it is a RealtimeThread running in the proper memory area.
        if (memoryArea == null && currentThread != null) {
            this.memoryArea = currentThread.getCurrentMemoryArea();
        }
        else if (memoryArea != null)
            this.memoryArea = memoryArea;
        
        this.groupParam = groupParam;
        this.noHeap = noHeap;
        this.logic = logic;
        this.scheduler = Scheduler.getDefaultScheduler();
    }
    

    ////////////////////////////////////////////////////////////////////////////
    //
    //   Methods
    //

    
    /**
     * If this handler was constructed using a separate Runnable logic
     * object, then that <code>Runnable</code> object s
     * <code>run</code> method is called; This method will be invoked
     * repeatedly while <code>fireCount</code> is greater than zero.
     *
     */

    public void handleAsyncEvent() {
        RealtimeThread thread;
        this.getAndDecrementPendingFireCount();
        if (this.noHeap)
            thread = new NoHeapRealtimeThread(this.schedulingParam,
                                              this.releaseParam,
                                              this.memoryParam,
                                              this.memoryArea,
                                              this.groupParam,
                                              this.handlerLogic);
        else
            thread = new RealtimeThread(this.schedulingParam,
                                        this.releaseParam,
                                        this.memoryParam,
                                        this.memoryArea,
                                        this.groupParam,
                                        this.handlerLogic);
        
        thread.setScheduler(this.scheduler);
        thread.start();
        thread = null;
    }
    
    protected void handleAsyncEventImpl() {
        if (this.logic != null)
            this.logic.run();
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
        return this.memoryParam;
    }


    /**
     * Set the {@link MemoryParameters} for this schedulable object.
     *
     * @param memoryParam the <code>MemoryParameters</code> for this
     * schedulable object.
     */
    public void setMemoryParameters(MemoryParameters memoryParam) {
        this.memoryParam = memoryParam;
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
        this.memoryParam = memoryParam;
        return true;
    }

    
    /**
     * Get the {@link ProcessingGroupParameters} of this
     * schedulable object.
     *
     * @return a <code>ProcessingGroupParameters</code> value
     */
    public ProcessingGroupParameters getProcessingGroupParameters() {
        return this.groupParam;
    }


    /**
     * Set the {@link ProcessingGroupParameters} for this schedulable object.
     *
     * @param groupParam a  <code>ProcessingGroupParameters</code> value
     */
    public void setProcessingGroupParameters(ProcessingGroupParameters groupParam) {
        this.groupParam = groupParam;
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
        // TODO: Implement Me!!!
        this.groupParam = groupParam;
        return true;
    }


    /**
     * Get the {@link ReleaseParameters} of this schedulable object.
     *
     * @return a <code>ReleaseParameters</code> value
     */
    public ReleaseParameters getReleaseParameters() {
        return this.releaseParam;
    }

    
    /**
     * Set the {@link ReleaseParameters}for this schedulable object.
     *
     * @param releaseParam a <code>ReleaseParameters</code> value
     */
    public void setReleaseParameters(ReleaseParameters releaseParam) {
        this.releaseParam = releaseParam;
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
        // TODO: Implement Me!!!
        this.releaseParam = releaseParam;
        return true;
    }
    
    /**
     * Get the {@link Scheduler} for this schedulable object.
     *
     * @return a <code>Scheduler</code> value
     */
    public Scheduler getScheduler() {
        return this.scheduler;
    }


    /**
     * Set the {@link Scheduler} for this schedulable object.
     *
     * @param scheduler the scheduler.
     * @exception IllegalThreadStateException 
     */
    public synchronized void setScheduler(Scheduler scheduler) throws IllegalThreadStateException {
        if (!scheduler.validateSchedulingParameters(this)) {
            // This exception is not appropriate for the problem
            // outlined, but the spec. does not describe when or
            // if the scheduling parameters should be checked for
            // compability with the given scheduler.
            throw new IllegalThreadStateException("Invalid Scheduling Parameters for the Given Scheduler.");
        }
        this.scheduler = scheduler;
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
    public synchronized void setScheduler(Scheduler scheduler,
                                          SchedulingParameters schedulingParam,
                                          ReleaseParameters releaseParam,
                                          MemoryParameters memoryParam,
                                          ProcessingGroupParameters groupParam)
        throws IllegalThreadStateException
    {
        this.schedulingParam = schedulingParam;
        this.releaseParam = releaseParam;
        this.memoryParam = memoryParam;
        this.groupParam = groupParam;
        
        if (!scheduler.validateSchedulingParameters(this)) {
            // This exception is not appropriate for the problem
            // outlined, but the spec. does not describe when or
            // if the scheduling parameters should be checked for
            // compability with the given scheduler.
            throw new IllegalThreadStateException("Invalid Scheduling Parameters for the Given Scheduler.");
        }
        
        this.scheduler = scheduler;
    }
    
    /**
     * Get the {@link SchedulingParameters} for this schedulable object.
     *
     * @return a <code>SchedulingParameters</code> value
     */
    public SchedulingParameters getSchedulingParameters() {
        //        System.out.println("SchedulingParameters getSchedulingParameters Called " + this);
        return this.schedulingParam;
    }
    

    /**
     * Set the {@link SchedulingParameters} for this schedulable
     * object only if the resulting task set is feasible.
     *
     * @param schedulingParam a <code>SchedulingParameters</code> value
     */
    public void setSchedulingParameters(SchedulingParameters schedulingParam) {
        this.schedulingParam = schedulingParam;
    }


    /**
     * Set the {@link SchedulingParameters} for this schedulable object.
     *
     * @param schedulingParam a <code>SchedulingParameters</code> value
     * @return true if the change was feasible, false otherwise.
     */
    public boolean setSchedulingParametersIfFeasible(SchedulingParameters schedulingParam) {
        // TODO: Implement Me!!!
        this.schedulingParam = schedulingParam;
        return true;
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
        // TODO: Implement Me!!!
        return false;
    }
    
    ////////////////////////////////////////////////////////////////////////////
    // -- End javax.realtime.Schedulable Methods --
    ////////////////////////////////////////////////////////////////////////////


    // -- Implementation Specific Methods --
    
    public int executionEligibility() {
        if (this.executionEligibility != -1)
            return this.executionEligibility;
        
        this.executionEligibility = this.getScheduler().computeExecutionEligibility(this);
        return this.executionEligibility;
    }

}


