// ************************************************************************
//    $Id: ThreadedExecutor.java 467 2004-12-22 21:58:06Z mdeters $
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
    
/**
 * This class provides a concrete implementation of {@link Executor}
 * that spawn a thread each time it has to execute.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public abstract class ThreadedExecutor implements Executor {

    protected MemoryParameters memoryParam;
    protected ReleaseParameters releaseParam;
    protected SchedulingParameters schedulingParam;
    protected MemoryArea memoryArea;
    protected ProcessingGroupParameters groupParam;
    
    protected Scheduler scheduler;

    protected boolean noHeap = false;


    public ThreadedExecutor() {
        this(null, null, null, null, null, false);
    }
    
    public ThreadedExecutor(SchedulingParameters schedulingParam,
                            ReleaseParameters releaseParam,
                            MemoryParameters memoryParam,
                            MemoryArea memoryArea,
                            ProcessingGroupParameters groupParam,
                            boolean noHeap)
    {
        RealtimeThread currentThread = null;
        try {
            currentThread = RealtimeThread.currentRealtimeThread();
        }
        catch (ClassCastException e) { }
        
        if (schedulingParam == null & currentThread != null) {
            this.schedulingParam = currentThread.getSchedulingParameters();
        }
        else if (schedulingParam != null)
            this.schedulingParam = schedulingParam;

        this.releaseParam = releaseParam;
        this.memoryParam = memoryParam;
        this.memoryArea = memoryArea;
        this.groupParam = groupParam;
        this.noHeap = noHeap;
        this.scheduler = Scheduler.getDefaultScheduler();
    }

    
    public void execute(Runnable logic) {
        RealtimeThread thread;
        if (noHeap)
            thread = new NoHeapRealtimeThread(this.schedulingParam,
                                              this.releaseParam,
                                              this.memoryParam,
                                              this.memoryArea,
                                              this.groupParam,
                                              logic);
        else
            thread = new RealtimeThread(this.schedulingParam,
                                        this.releaseParam,
                                        this.memoryParam,
                                        this.memoryArea,
                                        this.groupParam,
                                        logic);
        thread.setScheduler(this.scheduler);
        thread.start();
        thread = null;
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

}
