// ************************************************************************
//    $Id: ThreadBoundExecutor.java 467 2004-12-22 21:58:06Z mdeters $
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

import javax.realtime.Schedulable;
import javax.realtime.ScopedMemory;
import javax.realtime.ImmortalMemory;

/**
 * This class implements an {@link Executor} that has permanently a
 * thread bound.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public class ThreadBoundExecutor implements Executor {

    protected RealtimeThread thread;
    protected boolean active = false;
    protected ExecutorLogic executorLogic = new ExecutorLogic();
    protected int executionEligibility = -1;
    
    ///////////////////////////////////////////////////////////////////////////
    //                         Inner Classes
    //
    static private class ExecutorLogic implements Runnable {

        private Runnable task;
        private boolean active;
        protected EventVariable taskAvailableEvent;
        protected EventVariable executorIdleEvent;
        protected boolean isIdle;
        
        ExecutorLogic() {
            active = true;
            this.taskAvailableEvent = new EventVariable();
            this. executorIdleEvent =
                new EventVariable(true); // Create a "signaled" event
            this.isIdle = true;
        }
        
        void shutdown() {
            if (this.active()) {
                final ExecutorLogic logic = this;
                Runnable shutDownLogic = new Runnable() {
                        public void run() {
                            logic.active(false);
                        }
                    };
                try {
                    this.execute(shutDownLogic);
                } catch (ShutdownExecutorException e) {
                    e.printStackTrace();
                }
                shutDownLogic = null;
            }
        }
        
        void  execute(Runnable task) throws ShutdownExecutorException {
            //            System.out.println(">> ExecutorLogic.execute()");
            if (!this.active())
                throw new ShutdownExecutorException(">> Unable to execute logic, ThreadBoundExecutor" +
                                                    "has been already shut down");
            try {
                //                System.out.println(">> ExecutorLogic: Waiting for Idle Event");
                executorIdleEvent.await();
                this.isIdle(false);
                if (!this.active())
                    throw new ShutdownExecutorException(">> Unable to execute logic, ThreadBoundExecutor" +
                                                        "has been already shut down");
                this.task = task;
                //                System.out.println(">> ExecutorLogic: Signaling Available Task Event");
                taskAvailableEvent.signal();
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }

        public void run() {
            try {
                while (this.active) {
                    //                    System.out.println("#>> ExecutorLogic: Waiting for some Task");
                    taskAvailableEvent.await();
                    //                    System.out.println("#>> ExecutorLogic: Running Task " + this.task);                    
                    this.task.run();
                    //                    System.out.println("#>> ExecutorLogic: Signaling Idle Event");
                    executorIdleEvent.signal();
                    this.isIdle(true);
                }
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }

        synchronized boolean active() {
            return this.active;
        }

        synchronized void active(boolean bool) {
            this.active = bool;
        }

        synchronized boolean isIdle() {
            return this.isIdle;
        }

        private synchronized void isIdle(boolean bool) {
            this.isIdle = bool;
        }
        

    }
    //
    ///////////////////////////////////////////////////////////////////////////
    
    /**
     * Creates a new <code>ThreadBoundExecutor</code> instance with the
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
     * <code>ThreadBoundExecutor</code>. If null, inherit the current
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
    public ThreadBoundExecutor(SchedulingParameters schedulingParam,
                               ReleaseParameters releaseParam,
                               MemoryParameters memoryParam,
                               MemoryArea memoryArea,
                               ProcessingGroupParameters groupParam,
                               boolean noHeap) throws IllegalArgumentException {
        if (noHeap)
            this.thread = new NoHeapRealtimeThread(schedulingParam,
                                                   releaseParam,
                                                   memoryParam,
                                                   memoryArea,
                                                   groupParam,
                                                   this.executorLogic);
        else
            this.thread = new RealtimeThread(schedulingParam,
                                             releaseParam,
                                             memoryParam,
                                             memoryArea,
                                             groupParam,
                                             this.executorLogic);
        this.thread.setDaemon(true);
        this.thread.start();
    }

    /**
     * Creates a new <code>ThreadBoundExecutor</code> instance with the
     * specified parameters.
     *
     * @param schedulingParam a <code>SchedulingParameters</code> value
     * which will be associated with the constructed instance of this. 
     * If <code>null</code> this will be assigned the reference to the
     * {@link SchedulingParameters} of the current thread.
     */
    public ThreadBoundExecutor(SchedulingParameters schedulingParam)
        throws IllegalArgumentException
    {
        this(schedulingParam, null, null, null, null, false);
    }

    //
    //   -- javax.realtime.Executor Interface Methods Implementation --
    //
    
    /**
     * Executes the given logic. If the logic is executed on a newly
     * created thread, or of a thread is borrowed from a pool is
     * implementation dependent.
     *
     * @param logic a <code>Runnable</code> value
     * @exception ShutdownExecutorException if the
     * <code>Executor</code> has already been shut down.
     */
    public void execute(Runnable logic) throws ShutdownExecutorException {
        //        System.out.println(">> ThreadBoundExecutor.execute()");
        this.executorLogic.execute(logic);
    }
    
    /**
     * Releases all the resources assoiated with the executor. No
     * subsequent invocation of the <code>execute()</code> method
     * should be performed after the executor has been shutdown.
     *
     */
    public void shutdown() {
        this.executorLogic.shutdown();
    }
    
    
    // This method is here only beacuse it is required by the
    // Schedulable interface, but it not used.
    public void run() { }
    
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
