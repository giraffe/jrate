// ************************************************************************
//    $Id: RealtimeThread.java 689 2005-08-06 11:39:15Z mdeters $
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

import gnu.gcj.RawData;
import javax.realtime.util.EventVariable;

/**
 * <code>RealtimeThread</code> extends {@link java.lang.Thread} and
 * includes classes and methods to get and set parameter objects,
 * manage the execution of those threads with a {@link
 * ReleaseParameters} type of {@link PeriodicParameters} , and
 * waiting. A <code>RealtimeThread</code> object must be placed in a
 * memory area such that thread logic may unexceptionally access
 * instance variables and such that Java methods on {@link
 * java.lang.Thread} (e.g., enumerate and join) complete normally
 * except where such execution would cause access violations. 
 * Parameters for constructors may be null . In such cases the default
 * value will be the default value set for the particular type by the
 * associated instance of {@link Scheduler}.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public class RealtimeThread extends Thread implements Schedulable {

    protected SchedulingParameters   schedulingParam;
    protected ReleaseParameters      releaseParam;
    protected MemoryParameters       memoryParam;

    protected ProcessingGroupParameters groupParam;

    protected Runnable   logic;
    protected Scheduler  scheduler;
    protected boolean    hasStarted = false;

    protected RawData   scopeStack;
    

    // -- Only used for Periodic Thread --
    protected boolean   isPeriodic = false;
    protected RawData   timeoutHandler_;
    protected RawData   pipeID_;

    protected AsyncEventHandler   deadlineMissHandler;
    protected AsyncEventHandler   overrunHandler;

    protected boolean   hasStartedTimer        = false;
    protected boolean   periodExpired          = true;
    protected boolean   hasMissedDeadline      = false;
    protected boolean   hasOverrun             = false; 
    protected boolean   hasMissHandlers        = false;
    protected boolean   hasOverrunHandlers     = false;
    protected boolean   waitingForNextPeriod   = false;

    // TODO: Add accessor for this!
    boolean   releaseParameterChanged = false;
    
    protected EventVariable   missCondition = null;

    
    // This parameter is used by the implementation to express the
    // exectuion elegibility that comes from the scheduling parameters
    // set for this thread in term of priority. This is done because
    // most OSes only support priority based scheduler, and we
    // implement EDF, RED etc. by simulating it on top of OS
    // priorities.
    protected ExecutionEligibilityParameters   eligibilityParam
    = new ExecutionEligibilityParameters();


    ///////////////////////////////////////////////////////////////////////////
    //                              Constructors
    /////////////////////////////////////////////////////////////////////////// 
    
    /**
     * Creates a new <code>RealtimeThread</code> instance. All
     * parameter values are null.
     *
     */
    public RealtimeThread() {
        this(null, null, null, null, null, null);
    }

    /**
     * Creates a new <code>RealtimeThread</code> instance with given
     * <code>SchedulingParameters</code>
     *
     * @param schedulingParam -The <code>SchedulingParameters</code> associated
     * with this (and possibly other instances of RealtimeThread ).
     */
    public RealtimeThread(SchedulingParameters schedulingParam) {
        this(schedulingParam, null, null, null, null, null);
    }

    
    /**
     * Creates a new <code>RealtimeThread</code> instance with given
     * <code>SchedulingParameters</code> and
     * <code>ReleaseParameters</code>.
     *
     * @param schedulingParam -The <code>SchedulingParameters</code> associated
     * with this (and possibly other instances of RealtimeThread ).
     * @param releaseParam -The <code>ReleaseParameters</code> associated with
     * this (and possibly other instances of RealtimeThread ).
     */
    public RealtimeThread(SchedulingParameters schedulingParam,
                          ReleaseParameters releaseParam) {
        this(schedulingParam, releaseParam, null, null, null, null);
    }

    /**
     * Creates a new <code>RealtimeThread</code> instance with the
     * given characteristics and a <code>java.lang.Runnable</code>.
     *
     * @param schedulingParam The {@link SchedulingParameters}
     * associated with this (and possibly other instances of
     * <code>RealtimeThread<code>).
     * @param releaseParam The {@link ReleaseParameters} associated
     * with this (and possibly other instances of <code>RealtimeThread</code>).
     * @param memoryParam The {@link MemoryParameters} associated with
     * this (and possibly other instances of <code>RealtimeThread</code>).
     * @param memoryArea The {@link MemoryArea} associated with this.
     * @param groupParam -The {@link ProcessingGroupParameters} associated
     * with this (and possibly other instances of <code>RealtimeThread</code>).
     * @param logic the logic for this thread.
     */
    public RealtimeThread(SchedulingParameters schedulingParam,
                          ReleaseParameters releaseParam,
                          MemoryParameters memoryParam,
                          MemoryArea memoryArea,
                          ProcessingGroupParameters groupParam,
                          Runnable logic)
    {
        super(logic);
        this.schedulingParam = schedulingParam;
        this.setReleaseParameters(releaseParam);
        this.memoryParam = memoryParam;
        this.groupParam = groupParam;
        this.logic = logic;

        // Set the default scheduler as the scheduler for this thread.
        this.scheduler = Scheduler.getDefaultScheduler();

        
        try {
            // Try to get the memory area stack from the current
            // thread if it is realtime.
            RealtimeThread currentThread = RealtimeThread.currentRealtimeThread();
            this.initScopeStack(currentThread.getScopeStack());
        }
        catch (ClassCastException e) {
            // If this thread was started from a regular
            // java.lang.Thread, then we have to use one of the primordial
            // memory area. In this case we have to use the Heap.
            this.initScopeStack(HeapMemory.instance());
        }

        // This might looks odd, but actually the field
        // this.memoryArea is set to the current allocation context by
        // the initScopeStack method. So this check guarantees that we
        // don't push on top of the stack the memory area passed at
        // the ctor if we already are executing in that allocation
        // context
        if (memoryArea != null && !memoryArea.equals(this.getActiveMemoryArea())) {
            // TODO: SHOULD CHECK RETURN VALUE for single parent violation
            this.setTopMemoryArea(memoryArea);
        }

    }

    

    /**
     * Creates a new <code>RealtimeThread</code> instance. All
     * parameter values are null, but the logic.
     *
     * @param logic a <code>Runnable</code> representing the thread logic.
     */
    public RealtimeThread(Runnable logic) {
        this(null, null, null, null, null, logic);
    }

    /**
     * Gets the currently running RealtimeThread.
     *
     * @return a <code>RealtimeThread</code> value representing the
     * thread the is running now.
     * @exception RuntimeException if the current running thread is
     * not Realtime.
     */
    public static RealtimeThread currentRealtimeThread()
        throws ClassCastException
    {
        RealtimeThread currentThread;
        currentThread = (RealtimeThread)Thread.currentThread();
        return currentThread;
    }

    
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
     * Returns true if, after considering the values of the
     * parameters, the task set would still be feasible. In this case
     * the values of the parameters are changed. Returns false if,
     * after considering the values of the parameters, the task set
     * would not be feasible. In this case the values of the
     * parameters are not changed.
     *
     * @param releaseParam a <code>ReleaseParameters</code> value
     * @param memoryParam a <code>MemoryParameters</code> value
     * @return true if the resulting system is feasible, false
     * otherwise.
     */
    public boolean setIfFeasible(ReleaseParameters releaseParam,
                                 MemoryParameters memoryParam)
    {
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
     * @param releaseParam a <code>ReleaseParameters</code> value
     * @param memoryParam a <code>MemoryParameters</code> value
     * @param groupParam a <code>ProcessingGroupParameters</code> value
     * @return true if the resulting system is feasible, false
     * otherwise.
     */
    public boolean setIfFeasible(ReleaseParameters releaseParam,
                                 MemoryParameters memoryParam,
                                 ProcessingGroupParameters groupParam)
    {
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
     * @param releaseParam a <code>ReleaseParameters</code> value
     * @param groupParam a <code>ProcessingGroupParameters</code> value
     * @return true if the resulting system is feasible, false
     * otherwise.
     */
    public boolean setIfFeasible(ReleaseParameters releaseParam,
                                 ProcessingGroupParameters groupParam)
    {
        // TODO: Implement me!!!
        return false;
    }
    
    
    /**
     * Begin unblocking {@link RealtimeThread#waitForNextPeriod()} for a
     * periodic thread. Typically used when a periodic schedulable
     * object is in an overrun condition. The scheduler should
     * recompute the schedule and perform admission control. If this
     * does not have a type of {@link PeriodicParameters} as it {@link
     * ReleaseParameters} nothing happens.
     *
     */
    public void schedulePeriodic() {
        this.missCondition.signal();
    }
    
    /**
     * Stop unblocking {@link RealtimeThread#waitForNextPeriod()} for a
     * periodic schedulable object. If this does not have a type of
     * {@link PeriodicParameters} as it {@link ReleaseParameters}
     * nothing happens.
     *
     */
    public void deschedulePeriodic() {
        // TODO: Implement Me!!!
    }


    /**
     * Return the instance of {@link MemoryArea} which is the current
     * memory area for this.
     *
     * @return a <code>MemoryArea</code> value
     */
    public static MemoryArea getCurrentMemoryArea() {
        return (MemoryArea)
            RealtimeThread.currentRealtimeThread ().getActiveMemoryArea();
    }


    /**
     * Memory area stacks include inherited stacks from parent
     * threads. The inital memory area for the current
     * <code>RealtimeThread</code> is the memory area given as a
     * parameter to the constructor. This method returns the position
     * in the memory area stack of that initial memory area.
     *
     * @return The index into the memory area stack of the inital
     * memory area of the current <code>RealtimeThread</code>
     */
    public static int getInitialMemoryAreaIndex() {
        return RealtimeThread.currentRealtimeThread().getInitialMemoryAreaIndex_();
    }


    /**
     * Get the size of the stack of {@link MemoryArea} instances to which
     * this <code>RealtimeThread</code> has access.
     *
     * @return The size of the stack of {@link MemoryArea} instances.
     */
    public static int getMemoryAreaStackDepth() {
        return RealtimeThread.currentRealtimeThread().getMemoryAreaStackDepth_();
    }


    /**
     * Get the instance of {@link MemoryArea} in the memory area stack at
     * the index given. If the given index does not exist in the
     * memory area scope stack then null is returned.<p>
     *
     * @param index The offset into the memory area stack.
     * @return The instance of {@link MemoryArea} at index or null if the
     * given value is does not correspond to a position in the stack.
     */
    public static MemoryArea getOuterMemoryArea(int index) {
        return (MemoryArea)
            RealtimeThread.currentRealtimeThread().getOuterMemoryArea_(index);
    }

    /**
     * 
     *
     */
    public void interrupt() {
        //TODO: Implement Me!!!
        super.interrupt();
    }

    ////////////////////////////////////////////////////////////////////////
    // -- Method From javax.realtime.Schedulable --
    ////////////////////////////////////////////////////////////////////////

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
    public boolean
    setProcessingGroupParametersIfFeasible(ProcessingGroupParameters groupParam)
    {
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
    public synchronized void setReleaseParameters(ReleaseParameters releaseParam)
        throws IllegalThreadStateException
    {
        this.releaseParam = releaseParam;
        if (releaseParam instanceof PeriodicParameters
            &&
            releaseParam != null) {
            this.isPeriodic = true;
            PeriodicParameters pp = (PeriodicParameters)releaseParam;
            if (this.missCondition == null) {
                this.missCondition = new EventVariable(); 
            }
            this.deadlineMissHandler = pp.getDeadlineMissHandler();
            this.overrunHandler = pp.getCostOverrunHandler();
            if (this.hasStartedTimer) {
                this.releaseParameterChanged = true;
                this.updatePeriodicParameters(); 
            }
        }
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
    public synchronized void setScheduler(Scheduler scheduler)
        throws IllegalThreadStateException
    {
        // If the thread is already running than it is illegal to
        // change the scheduler.
        if (this.hasStarted)
            throw new
                IllegalThreadStateException("The Scheduler of a Running"
                                            + " thread cannot be changed");

        if (!this.scheduler.validateSchedulingParameters(this)) {
            // This exception is not appropriate for the problem
            // outlined, but the spec. does not describe when or
            // if the scheduling parameters should be checked for
            // compability with the given scheduler.
            throw
                new IllegalThreadStateException("Invalid Scheduling Parameters"
                                                + "for the Given Scheduler.");
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
        // If the thread is already running than it is illegal to
        // change the scheduler.
        if (this.hasStarted)
            throw new
                IllegalThreadStateException("The Scheduler of a Running" +
                                            " thread cannot be changed");

        this.schedulingParam = schedulingParam;
        this.releaseParam = releaseParam;
        this.memoryParam = memoryParam;
        this.groupParam = groupParam;
        
        if (!scheduler.validateSchedulingParameters(this)) {
            // This exception is not appropriate for the problem
            // outlined, but the spec. does not describe when or
            // if the scheduling parameters should be checked for
            // compability with the given scheduler.
            throw new
                IllegalThreadStateException("Invalid Scheduling Parameters"
                                            + " for the Given Scheduler.");
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
    public boolean setSchedulingParametersIfFeasible(SchedulingParameters
                                                     schedulingParam)
    {
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

    
    /**
     * An accurate timer with nanosecond granularity. The actual
     * resolution available for the clock must be queried from
     * somewhere else. The time base is the given {@link Clock}. The
     * sleep time may be relative or absolute. If relative, then the
     * calling thread is blocked for the amount of time given by the
     * parameter. If absolute, then the calling thread is blocked
     * until the indicated point in time. If the given absolute time
     * is before the current time, the call to sleep returns
     * immediately. <br>
     *
     * <b>Implementor Note:</b> This method is ugly since it allows
     * the application writer to pass a RationalTime, which does not
     * make sense in this case. 
     * 
     * @param clock a <code>Clock</code> value
     * @param time a <code>HighResolutionTime</code> value
     * @exception InterruptedException
     * @deprecated Use the approriate method i.e. the one that has
     * either RelativeTime or AbsoluteTime.

    */
    public static void sleep(Clock clock, HighResolutionTime time)
        throws InterruptedException
    {
        if (time instanceof AbsoluteTime)
            sleep(clock, (AbsoluteTime)time);
        else if (time instanceof RelativeTime) 
            sleep(clock, (RelativeTime)time);
        else
            throw new
                IllegalArgumentException("The time parameter should be either" +
                                         " a RelativeTime or an AbsoluteTime"); 
    }


    /**
     * An accurate timer with nanosecond granularity. The actual
     * resolution available for the clock must be queried from
     * somewhere else. The time base is the given {@link Clock}. The
     * sleep time may be relative or absolute. If relative, then the
     * calling thread is blocked for the amount of time given by the
     * parameter. If absolute, then the calling thread is blocked
     * until the indicated point in time. If the given absolute time
     * is before the current time, the call to sleep returns
     * immediately. <br>
     *
     * 
     * @param clock a <code>Clock</code> value
     * @param time a <code>RelativeTime</code> value
     * @exception InterruptedException
     */
    public native static void sleep(Clock clock, RelativeTime time)
        throws InterruptedException;

    /**
     * An accurate timer with nanosecond granularity. The actual
     * resolution available for the clock must be queried from
     * somewhere else. The time base is the given {@link Clock}. The
     * sleep time may be relative or absolute. If relative, then the
     * calling thread is blocked for the amount of time given by the
     * parameter. If absolute, then the calling thread is blocked
     * until the indicated point in time. If the given absolute time
     * is before the current time, the call to sleep returns
     * immediately. <br>
     *
     * 
     * @param clock a <code>Clock</code> value
     * @param time a <code>AbsoluteTime</code> value
     * @exception InterruptedException
     */
    public native static void sleep(Clock clock, AbsoluteTime time)
        throws InterruptedException;

    
    /**
     * An accurate timer with nanosecond granularity. The actual
     * resolution available for the clock must be queried from
     * somewhere else. The time base is the given {@link Clock}. The
     * calling thread is blocked for the amount of time given by the
     * parameter. 
     *
     * @param time a <code>RelativeTime</code> value
     * @exception InterruptedException
     */
    public native static void sleep(RelativeTime time)
        throws InterruptedException;

    /**
     * An accurate timer with nanosecond granularity. The actual
     * resolution available for the clock must be queried from
     * somewhere else. The time base is the given {@link Clock}. The
     * calling thread is blocked until the indicated point in time. If
     * the given absolute time is before the current time, the call to
     * sleep returns immediately.
     *
     * @param time an <code>AbsoluteTime</code> value
     * @exception InterruptedException
     */
    public native static void sleep(AbsoluteTime time)
        throws InterruptedException;

    /**
     * An accurate timer with nanosecond granularity. The actual
     * resolution available for the clock must be queried from
     * somewhere else. The time base is the given {@link Clock}. The
     * sleep time may be relative or absolute. If relative, then the
     * calling thread is blocked for the amount of time given by the
     * parameter. If absolute, then the calling thread is blocked
     * until the indicated point in time. If the given absolute time
     * is before the current time, the call to sleep returns
     * immediately. <br>
     *
     * <b>Implementor Note:</b> This method is ugly since it allows
     * the application writer to pass a RationalTime, which does not
     * make sense in this case. 
     * 
     * @param time a <code>HighResolutionTime</code> value
     * @exception InterruptedException
     */
    public static void sleep(HighResolutionTime time)
        throws InterruptedException
    {
        if (time instanceof AbsoluteTime)
            sleep((AbsoluteTime)time);
        else if (time instanceof RelativeTime) 
            sleep((RelativeTime)time);
        else
            throw new
                IllegalArgumentException("The time parameter should be either" +
                                         " a RelativeTime or an AbsoluteTime"); 
    }
             
    /**
     * Checks if the instance of RealtimeThread is startable and
     * starts it if it is.
     *
     */
    public native void start();

    public void run() {
        super.run();
        // Tell the associated scheduler that you are done.
        this.scheduler.notifyThreadCompletion(this);
    }

    // This method is invoked at the end of really_run (see prims.cc)
    
    protected void rtfini_() {
        // decrement the reference count for all the ScopedMemory
        // instances in the scope stack.
        this.finiScopeStack();
    }

    
    /**
     * Used by threads that have a reference to a {@link
     * ReleaseParameters} type of {@link PeriodicParameters} to block
     * until the start of each period. Periods start at either the
     * start time in {@link PeriodicParameters} or when
     * <code>this.start()</code> is called. This method will block
     * until the start of the next period unless the thread is in
     * either an overrun or deadline miss condition. If both overrun
     * and miss handlers are null and the thread has overrun its cost
     * or missed a deadline <code>public boolean waitForNextPeriod()
     * throws IllegalThreadStateException</code> will immediately
     * return <code>false</code> once per overrun or deadline miss. It
     * will then again block until the start of the next period
     * (unless, of course, the thread has overrun or missed again). If
     * either the overrun or deadline miss handlers are not null and
     * the thread is in either an overrun or deadline miss condition
     * <code>public boolean waitForNextPeriod() throws
     * IllegalThreadStateException</code> will block until the handler
     * corrects the situation (possibly by calling <code>public void
     * schedulePeriodic()</code> ). 
     *
     * @return a <code>boolean</code> value
     * @exception IllegalThreadStateException  if this does not have a reference
     * to a {@link ReleaseParameters} type of {@link PeriodicParameters}.
     */
    public boolean waitForNextPeriod() throws IllegalThreadStateException {
        if (!isPeriodic)
            throw new IllegalThreadStateException("This is not a PeriodicThread!");
        boolean check = this.hasOverrun ||  this.hasMissedDeadline;
        boolean retVal = false;
        if (check == false) {
            this.waitingForNextPeriod = true;
            retVal = this.waitForNextPeriod_();
        }
        else {
            if (this.deadlineMissHandler != null && this.hasMissedDeadline) {
                try {
                    this.missCondition.await();
                    this.hasMissedDeadline = false;
                    retVal = true;
                } catch (InterruptedException e) { }
            }
            else if (this.overrunHandler != null && this.hasOverrun) {
                try {
                    this.missCondition.await();
                    this.hasOverrun = false;
                    retVal = true;
                } catch (InterruptedException e) { } 
            }
            
            if (this.deadlineMissHandler == null && this.overrunHandler == null)
                retVal = false;
        }
        return retVal;
    }

    // -- This is really bad, and pollutes the real-time thread
    // interface, there should really be a periodic thread...
    native boolean waitForNextPeriod_();

    private RelativeTime getPeriod() {
        if (this.isPeriodic) {
            return ((PeriodicParameters)this.releaseParam).getPeriod();
        }
        return null;
    }

        
    ////////////////////////////////////////////////////////////////////////////
    //
    //     Implementation Specific methods
    //
    void setExecutionEligibilityParameters(ExecutionEligibilityParameters
                                           eligibilityParam)
    {
        this.eligibilityParam = eligibilityParam;
    }

    ExecutionEligibilityParameters getExecutionEligibilityParameters() {
        return this.eligibilityParam;
    }

    protected boolean validateSchedulingParameters() {
        return this.scheduler.validateSchedulingParameters(this);
    }
    
    native boolean pushMemoryArea(MemoryArea memoryArea);
    
    native MemoryArea popMemoryArea();

    native boolean executeInMemoryArea(MemoryArea ma, Runnable logic);
    
    public native void setupTSS();
    
    public native MemoryArea getActiveMemoryArea();
    
    protected  native MemoryArea getOuterMemoryArea_(int index);

    protected native int getInitialMemoryAreaIndex_();

    public native int getMemoryAreaStackDepth_();

    public int executionEligibility() {
        // TODO: Think carefully about how this value should be taken.
        return this.eligibilityParam.getExecutionEligibility();
    }

    native void initScopeStack(RawData parentScopeStack);

    native void initScopeStack(MemoryArea ma);

    protected native boolean setTopMemoryArea(MemoryArea memoryArea); 

    native void finiScopeStack();

    protected RawData getScopeStack() {
        return this.scopeStack;
    }
    
    ///////////////////////////////////////////////////////////////////////////
    // Other native methods
    //
    public static native void yield();

    //
    // TODO: The following methos has to be implemented natively, we
    // can't rely on the library provided one, since our scheduler
    // might be different!
    //
    //    public native void setPriority(int priority);

    //
    // -- Periodic Behaviour Implementation methods --
    //
    protected native void setupTimeoutHandler();

    // Miss Handler implementation specific methods

    boolean isWaitingForNextPeriod() {
        return this.waitingForNextPeriod;
    }

    void setWaitingForNextPeriod(boolean b) {
        this.waitingForNextPeriod = b;
    }

    void setDeadlineMiss(boolean b) {
        this.hasMissedDeadline = b;
    }

    void setOverrun(boolean b) {
        this.hasOverrun = b;
    }

    
    void handleDeadlineMiss() {
        this.hasMissedDeadline = true;
        if (this.deadlineMissHandler != null)
            this.deadlineMissHandler.handleAsyncEvent();
    }

    void handleOverrun() {
        this.hasOverrun = true;
        if (this.overrunHandler != null)
            this.overrunHandler.handleAsyncEvent();
    }

    protected native void updatePeriodicParameters();
}

