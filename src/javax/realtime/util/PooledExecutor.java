// ************************************************************************
//    $Id: PooledExecutor.java 467 2004-12-22 21:58:06Z mdeters $
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
package javax.realtime.util;

import javax.realtime.MemoryParameters;
import javax.realtime.ReleaseParameters;
import javax.realtime.SchedulingParameters;
import javax.realtime.MemoryArea;
import javax.realtime.ProcessingGroupParameters;
import javax.realtime.Scheduler;
import javax.realtime.RealtimeThread;
import javax.realtime.NoHeapRealtimeThread;

import javax.realtime.ScopedMemory;
import javax.realtime.Schedulable;
import javax.realtime.ImmortalMemory;

import java.util.LinkedList;
import java.util.ListIterator;

/**
 * This class represent an abstraction for an <code>Executor</code>
 * that is actually a pool of <code>Executor</code>s. The QoS
 * parameters used to create this class are used as default parameters
 * for the pool's <code>Executor</code>s.<br>
 *
 * <b>NOTE:</b> The basic idea behind executors pool, is that the each
 * individual executor changes its QoS in order to adjust to the
 * schedulable entity for which it is running. No schedulability check
 * is done while changing the QoS, because the change should keep the
 * system feasible as far as the entity that is using the executor was
 * considered in the feasibility analysis.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public class PooledExecutor implements Executor {

    private int executorNum;
    private PooledExecutorLogic executorPool[];
    private int lastExecutorIndex;
    private CountableEventVariable executorAvailableEvent;
    private boolean active;

    private SchedulingParameters schedulingParam;
    private ReleaseParameters releaseParam;
    private MemoryParameters memoryParam;
    private MemoryArea memoryArea;
    private ProcessingGroupParameters groupParam;
    private Scheduler scheduler;
    
    private int executionEligibility;
    
    ///////////////////////////////////////////////////////////////////////////
    //                         Inner Classes
    //
    class PooledExecutorLogic implements Runnable {

        private Runnable task;
        private Executor executor;
        
        PooledExecutorLogic(Executor executor) {
            this.executor = executor;
        }

        void shutdown() {
            this.executor.shutdown();
        }
        
        void execute(Runnable task) throws ShutdownExecutorException {
            //            System.out.println(">> PooledExecutorLogic.execute()");
            this.task = task;
            //            System.out.println(">> PooledExecutorLogic: Executing " + task + " with " + this.executor);
            this.executor.execute(this);
        }
        
        public void run() {
            //            System.out.println("#>> PooledExecutorLogic: run()");
            this.task.run();
            //            System.out.println(">> PooledExecutorLogic: notifyTaskCompletion()");
            PooledExecutor.this.notifyTaskCompletion(this);
            //            System.out.println("#>> PooledExecutorLogic: run(): DONE");
        }
    }
    //
    ///////////////////////////////////////////////////////////////////////////

    /**
     * Creates a new <code>PooledExecutor</code> instance with the
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
     * <code>PooledExecutor</code>. If null, inherit the current
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
     */
    public PooledExecutor(int executorNum,
                          SchedulingParameters schedulingParam,
                          ReleaseParameters releaseParam,
                          MemoryParameters memoryParam,
                          MemoryArea memoryArea,
                          ProcessingGroupParameters groupParam,
                          boolean noHeap) throws IllegalArgumentException {

        this.executorNum = executorNum;
        this.executorPool = new PooledExecutorLogic[executorNum];
        this.executorAvailableEvent = new CountableEventVariable(executorNum);

        this.schedulingParam = schedulingParam;
        this.releaseParam = releaseParam;
        this.memoryParam = memoryParam;
        this.memoryArea = memoryArea;
        this.groupParam = groupParam;
        
        ThreadBoundExecutor executor;
        for (int i = 0; i < executorNum; i++) {
            executor = new ThreadBoundExecutor(schedulingParam,
                                               releaseParam,
                                               memoryParam,
                                               memoryArea,
                                               groupParam,
                                               noHeap);
            this.executorPool[i] = new PooledExecutorLogic(executor);
        }
        lastExecutorIndex = executorNum - 1;
        executor = null;
        this.scheduler = Scheduler.getDefaultScheduler();
        
        this.active(true);
    }

    synchronized void notifyTaskCompletion(PooledExecutorLogic executorLogic) {
        //        System.out.println(">> PooledExecutor.notifyTaskCompletion()");
        this.executorPool[++this.lastExecutorIndex] = executorLogic;
        executorAvailableEvent.signal();
    }

    
    public void execute(Runnable task)
        throws ShutdownExecutorException
    {
        //        System.out.println(">> PooledExecutor.execute()");
        if (!this.active())
            throw new ShutdownExecutorException(">> Unable to execute logic, ThreadBoundExecutor" +
                                                "has been already shut down");
        try {
            //            System.out.println(">> PooledExecutor: Waiting for a task");
            executorAvailableEvent.await();
            //            System.out.println(">> PooledExecutor: Grabbing and executor");
            PooledExecutorLogic executorLogic = null;
            synchronized (this) {
                executorLogic = this.executorPool[lastExecutorIndex--];
            }
            //            System.out.println(">> PooledExecutor: Got " + executorLogic);
            executorLogic.execute(task);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }

    public synchronized void shutdown() {
        this.active(false);
        PooledExecutorLogic pel;

        for (int i = 0; i < this.executorNum; i++)
            this.executorPool[i].shutdown();
    }

    private boolean active() {
        return this.active;
    }

    private void active(boolean bool) {
        this.active = bool;
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
        return false;
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
        return false;
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
        return false;
    }
    
    /**
     * Get the {@link Scheduler} for this schedulable object.
     *
     * @return a <code>Scheduler</code> value
     */
    public Scheduler getScheduler() {
        return scheduler;
    }


    /**
     * Set the {@link Scheduler} for this schedulable object.
     *
     * @param scheduler the scheduler.
     * @exception IllegalThreadStateException 
     */
    public void setScheduler(Scheduler scheduler) throws IllegalThreadStateException {
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
    public  void setScheduler(Scheduler scheduler,
                              SchedulingParameters schedulingParam,
                              ReleaseParameters releaseParam,
                              MemoryParameters memoryParam,
                              ProcessingGroupParameters groupParam)
        throws IllegalThreadStateException
    {
        this.scheduler = scheduler;
        this.schedulingParam = schedulingParam;
        this.releaseParam = releaseParam;
        this.memoryParam = memoryParam;
        this.groupParam = groupParam;
    }
    
    /**
     * Get the {@link SchedulingParameters} for this schedulable object.
     *
     * @return a <code>SchedulingParameters</code> value
     */
    public SchedulingParameters getSchedulingParameters() {
        return schedulingParam;
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
        return false;
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
        return false;
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

    public void run() { }
}
