// ************************************************************************
//    $Id: PrivateScopedMemory.java 439 2004-10-26 21:23:28Z mdeters $
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
 * The class <code>PrivateScopedMemory</code> refines the
 * <code>ScopedMemory</code> by restricting the number of active
 * thread within a memory to one.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public abstract class PrivateScopedMemory extends ScopedMemory {

    protected RealtimeThread owner;

    /**
     * Creates a new <code>PrivateScopedMemory</code> instance.
     *
     * @param size The size of <code>MemoryArea</code> to allocate, in
     * bytes. If size is less than or equal to zero an
     * {@link IllegalArgumentException} is thrown.
     */
    public PrivateScopedMemory(long size) {
        this(size, null);
    }

    /**
     * Creates a new <code>PrivateScopedMemory</code> instance.
     *
     * @param size The size of <code>MemoryArea</code> to allocate, in
     * bytes. If size is less than or equal to zero an
     * {@link IllegalArgumentException} is thrown.
     * @param logic -The <code> java.lang.Runnable</code> whose run() method is
     * invoked when any of the variations of enter() which do not take
     * a <code>java.lang.Runnable</code> is called.
     */
    public PrivateScopedMemory(long size, Runnable logic) {
        super(size, logic);
    }


    /**
     * Creates a new <code>PrivateScopedMemory</code> instance.
     *
     * @param size A {@link SizeEstimator} object which indicates the
     * amount of memory required by this <code>MemoryArea</code>.
     */
    public PrivateScopedMemory(SizeEstimator size) {
        this(size.getEstimate(), null);
    }


    /**
     * Creates a new <code>PrivateScopedMemory</code> instance.
     *
     * @param size The size of <code>MemoryArea</code> to
     * allocate, in bytes.
     * @param logic The run() method of this object will be called
     * whenever <code> enter()</code> called.
     */
    public PrivateScopedMemory(SizeEstimator size, Runnable logic) {
        this(size.getEstimate(), logic);
    }


    /**
     * Wait until the reference count of this
     * <code>PrivateScopedMemory</code> goes down to zero.
     *
     * @exception InterruptedException If another thread interrupts
     * this thread while it is waiting.
     */
    public void join() throws InterruptedException {
        if (this.getReferenceCount() == 0)
            return;
        synchronized (this.joinSynchronizer) {
            this.joinSynchronizer.wait();
        }
    }

    
    /**
     * Wait at most until the time designated by the <code>time</code>
     * parameter for the reference count of this
     * <code>PrivateScopedMemory</code> to go down to zero.
     *
     * @param time If this time is an absolute time, the wait is
     * bounded by that point in time. If the time is a relative time
     * (or a member of the <code>RationalTime</code> subclass of
     * <code>RelativeTime</code> the wait is bounded by a the
     * specified interval from some time between the time
     * <code>join</code> is called and the time it starts waiting for
     * the reference count to reach zero.
     * @exception InterruptedException if another thread interrupts
     * this thread while it is waiting.
     */
    public void join(HighResolutionTime time) throws InterruptedException {
        if (this.getReferenceCount() == 0)
            return;
        synchronized (this.joinSynchronizer) {
            this.joinSynchronizer.wait(time.getMilliseconds(),
                                       time.getNanoseconds());
        }
    }

    
    /**
     * Combine <code>join();enter();</code> such that no
     * <code>enter</code> from another thread can intervene between
     * the two method invocations. The resulting method will wait for
     * the reference count on this <code>PrivateScopedMemory</code> to reach
     * zero, then enter the <code>PrivateScopedMemory</code> and execute the
     * <code>run</code> method from <code>logic</code> passed in the
     * constructor. If no Runnable was passed, the method returns
     * immediately.
     *
     * @exception InterruptedException If another thread interrupts
     * this thread while it is waiting.
     * @exception ScopedCycleException If entering this
     * <code>PrivateScopedMemory</code> would violate the single parent rule.
     */
    public void joinAndEnter() throws InterruptedException, ScopedCycleException {
        if (this.logic == null)
            throw new IllegalArgumentException("No Runnable associated with this Memory Area");
        
        RealtimeThread currentThread = RealtimeThread.currentRealtimeThread();
        synchronized (this.joinSynchronizer) {
            if (this.getReferenceCount() != 0) {
                this.joinSynchronizer.wait();
                this.setOwner(); 
                if (currentThread.pushMemoryArea(this) == false)
                    throw new ScopedCycleException("Entering this memory area would create a cycle!");
            }
            else if (currentThread.pushMemoryArea(this) == false)
                throw new ScopedCycleException("Entering this memory area would create a cycle!");
        }

        try {
            // Run the logic
            guardedRun(this.logic);
        }
        finally {
            // Pop this memory area on the current real-time thread stack
            synchronized (this.joinSynchronizer) {
                currentThread.popMemoryArea(); 
                currentThread = null;
                this.resetOwner();
                if (this.getReferenceCount() == 0)
                    this.joinSynchronizer.notify();
            }
            
        }
    }

    /**
     * Combine <code>join(time);enter();</code> such that no
     * <code>enter</code> from another thread can intervene between
     * the two method invocations. The resulting method will wait for
     * the reference count on this <code>PrivateScopedMemory</code> to reach
     * zero, or for the current time to reach the designated time,
     * then enter the <code>PrivateScopedMemory</code> and execute the
     * <code>run</code> method from <code>Runnable</code> object
     * passed at constructin time. If no <code>Runnable</code> was
     * passed then this method returns immediately.
     *
     * @param time The time that bounds the wait.
     * @exception InterruptedException if another thread interrupts
     * this thread while it is waiting.
     * @exception ScopedCycleException If entering this
     * <code>PrivateScopedMemory</code> would violate the single parent rule.
     */
    public void joinAndEnter(HighResolutionTime time)
        throws InterruptedException, ScopedCycleException
    {
        if (this.logic == null)
            throw new IllegalArgumentException("No Runnable associated with this Memory Area");
        
        RealtimeThread currentThread = RealtimeThread.currentRealtimeThread();

        synchronized (this.joinSynchronizer) {
            if (this.getReferenceCount() != 0) {
                this.joinSynchronizer.wait(time.getMilliseconds(),
                                           time.getNanoseconds());
                this.setOwner(); 
                if (currentThread.pushMemoryArea(this) == false)
                    throw new ScopedCycleException("Entering this memory area would create a cycle!");
            }
            else if (currentThread.pushMemoryArea(this) == false)
                throw new ScopedCycleException("Entering this memory area would create a cycle!");
        }

        try {
            // Run the logic
            guardedRun(this.logic);
        }
        finally {
            // Pop this memory area on the current real-time thread stack
            synchronized (this.joinSynchronizer) {
                currentThread.popMemoryArea(); 
                currentThread = null;
                this.resetOwner();
                if (this.getReferenceCount() == 0)
                    this.joinSynchronizer.notify();
            }
        }
    }

    /**
     * Combine <code>join();enter(logic);</code> such that no
     * <code>enter</code> from another thread can intervene between
     * the two method invocations. The resulting method will wait for
     * the reference count on this <code>PrivateScopedMemory</code> to reach
     * zero, then enter the <code>PrivateScopedMemory</code> and execute the
     * <code>run</code> method from <code>logic</code>
     *
     * @param logic The {@link Runnable} object which contains the
     * code to execute.
     * @exception InterruptedException If another thread interrupts
     * this thread while it is waiting.
     * @exception ScopedCycleException If entering this
     * <code>PrivateScopedMemory</code> would violate the single parent rule.
     */
    public void joinAndEnter(Runnable logic)
        throws InterruptedException, ScopedCycleException
    {
        if (logic == null)
            throw new IllegalArgumentException("No Runnable associated with this Memory Area");
        
        RealtimeThread currentThread = RealtimeThread.currentRealtimeThread();
        
        synchronized (this.joinSynchronizer) {
            if (this.getReferenceCount() != 0) {
                this.joinSynchronizer.wait();
                this.setOwner(); 
                if (currentThread.pushMemoryArea(this) == false)
                    throw new ScopedCycleException("Entering this memory area would create a cycle!");
            }
            else if (currentThread.pushMemoryArea(this) == false)
                throw new ScopedCycleException("Entering this memory area would create a cycle!");
        }

        try {
            // Run the logic
            guardedRun(logic);
        }
        finally {
            // Pop this memory area on the current real-time thread stack
            synchronized (this.joinSynchronizer) {
                currentThread.popMemoryArea(); 
                currentThread = null;
                this.resetOwner();
                if (this.getReferenceCount() == 0)
                    this.joinSynchronizer.notify();
            }
        }
    }

    /**
     * Combine <code>join(time);enter(logic);</code> such that no
     * <code>enter</code> from another thread can intervene between
     * the two method invocations. The resulting method will wait for
     * the reference count on this <code>PrivateScopedMemory</code> to reach
     * zero, or for the current time to reach the designated time,
     * then enter the <code>PrivateScopedMemory</code> and execute the
     * <code>run</code> method from <code>logic</code>.
     *
     * @param logic The {@link Runnable} object which contains the
     * code to execute.
     * @param time The time that bounds the wait.
     * @exception InterruptedException if another thread interrupts
     * this thread while it is waiting.
     * @exception ScopedCycleException If entering this
     * <code>PrivateScopedMemory</code> would violate the single parent rule.
     */
    public void joinAndEnter(Runnable logic, HighResolutionTime time) 
        throws InterruptedException, ScopedCycleException
    {
        if (logic == null)
            throw new IllegalArgumentException("No Runnable associated with this Memory Area");
        
        RealtimeThread currentThread = RealtimeThread.currentRealtimeThread();
        
        synchronized (this.joinSynchronizer) {
            if (this.getReferenceCount() != 0) {
                this.joinSynchronizer.wait(time.getMilliseconds(),
                                           time.getNanoseconds());
                this.setOwner(); 
                if (currentThread.pushMemoryArea(this) == false)
                    throw new ScopedCycleException("Entering this memory area would create a cycle!");
            }
            else if (currentThread.pushMemoryArea(this) == false)
                throw new ScopedCycleException("Entering this memory area would create a cycle!");
        }

        try {
            // Run the logic
            guardedRun(logic);
        }
        finally {
            // Pop this memory area on the current real-time thread stack
            synchronized (this.joinSynchronizer) {
                currentThread.popMemoryArea(); 
                currentThread = null;
                this.resetOwner();
                if (this.getReferenceCount() == 0)
                    this.joinSynchronizer.notify();
            }
        }
    }
    
    /**
     * Returns a user-friendly representation of this
     * <code>PrivateScopedMemory</code>.
     * @return The string representation
     */
    public String toString() {
        return super.toString();
    }

    /**
     * Associate this memory area to the current real-time thread for
     * the duration of the execution of the <code>run()</code> method
     * of the given {@link java.lang.Runnable}. During this bound
     * period of execution, all objects are allocated from the memory
     * area until another one takes effect, or the
     * <code>enter()</code> method is exited. A runtime exception is
     * thrown if this method is called from thread other than a
     * <code>RealtimeThread</code> or
     * <code>NoHeapRealtimeThread</code>.
     *
     * @param logic The Runnable object whose run() method should be
     * invoked.
     * @exception ScopedCycleException If entering this PrivateScopedMemory
     * would violate the single parent rule.
     */
    public void enter(Runnable logic) throws ScopedCycleException {
        RealtimeThread currentThread = RealtimeThread.currentRealtimeThread();
        
        if (logic == null)
            throw new IllegalArgumentException("No Runnable associated with this Memory Area");
        
        synchronized (this.joinSynchronizer) {
            // Push this memory area on the current real-time thread stack
            this.setOwner(); 
            if (currentThread.pushMemoryArea(this) == false)
                throw new ScopedCycleException("Entering this memory area would create a cycle!"); 
        }
        try {
            // Run the logic
            guardedRun(logic);
        } 
        finally {
            // Pop this memory area on the current real-time thread stack
            
            synchronized (joinSynchronizer) {
                currentThread.popMemoryArea(); 
                currentThread = null;
                this.resetOwner(); 
                if (this.getReferenceCount() == 0)
                    joinSynchronizer.notify();
            }
        }
    }

    protected synchronized void setOwner() {
        RealtimeThread currentThread = RealtimeThread.currentRealtimeThread();
        if (this.owner == null) 
            this.owner = currentThread;
        else if (this.owner != currentThread)
            throw new AccessViolationError("Trying to enter a non-owned PrivateScopedMemory"); 
    }

    protected synchronized void resetOwner() {
        this.owner = null;
    }

}
