// ************************************************************************
//    $Id: ScopedMemory.java 439 2004-10-26 21:23:28Z mdeters $
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
 * <code>ScopedMemory</code> is the abstract base class of all classes
 * dealing with representations of memory spaces with a limited
 * lifetime. The <code>ScopedMemory</code> area is valid as long as
 * there are real-time threads with access to it. A reference is
 * created for each accessor when either a real-time thread is created
 * with the ScopedMemory object as its memory area, or a real-time
 * thread runs the <code>public void enter() throws
 * ScopedCycleException</code> method for the memory area. When the
 * last reference to the object is removed, by exiting the thread or
 * exiting the enter() method, finalizers are run for all objects in
 * the memory area, and the area is emptied. A ScopedMemory area is a
 * connection to a particular region of memory and reflects the
 * current status of it. The object does not necessarily contain
 * direct references to the region of memory that is implementation
 * dependent. When a ScopedMemory area is instantiated, the object
 * itself is allocated from the current memory allocation scheme in
 * use, but the memory space that object represents is not. Typically,
 * the memory for a ScopedMemory area might be allocated using native
 * method implementations that make appropriate use of malloc() and
 * free() or similar routines to manipulate memory. The enter() method
 * of ScopedMemory is the mechanism used to activate a new memory
 * scope. Entry into the scope is done by calling the method: public
 * void enter(Runnable r) Where r is a Runnable object whose run()
 * method represents the entry point to the code that will run in the
 * new scope. Exit from the scope occurs when the r.run() completes. 
 * Allocations of objects within r.run() are done withthe ScopedMemory
 * area. When r.run() is complete, the scoped memory area is no longer
 * active. Its reference count will be decremented and if it is zero
 * all of the objects in the memory area finalized and collected. 
 * Objects allocated from a ScopedMemory area have a unique lifetime. 
 * They cease to exist on exiting a public void enter() throws
 * ScopedCycleException method or upon exiting the last real-time
 * thread referencing the area, regardless of any references that may
 * exist to the object. Thus, to maintain the safety of Java and avoid
 * dangling references, a very restrictive set of rules apply to
 * ScopedMemory area objects: <b>
 * 
 *  <ul>
 *    <li> 1. A reference to an object in ScopedMemory can never
 *            be stored in an Object allo-cated in the  Java heap.
 *    </li>
 *     
 *    <li> 2. A reference to an object in ScopedMemory can never be stored in an
 *            Object allo-cated in ImmortalMemor.
 *    </li>
 *
 *    <li> 3. A reference to an object in ScopedMemory can only be stored in
 *            Objects allocated in the same ScopedMemory area, or into a - more
 *            inner - ScopedMemory area nested by the use of its enter() method.
 *
 *    <li> 4. References to immortal or heap objects may be stored into an
 *             object  allocated in a ScopedMemory area.
 *    </li>
 *  </ul>
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public abstract class ScopedMemory extends MemoryArea {

    protected char[] joinSynchronizer = new char[0];
    
    /**
     * Creates a new <code>ScopedMemory</code> instance.
     *
     * @param size The size of <code>MemoryArea</code> to allocate, in
     * bytes. If size is less than or equal to zero an
     * {@link IllegalArgumentException} is thrown.
     */
    public ScopedMemory(long size) {
        this(size, null);
    }

    /**
     * Creates a new <code>ScopedMemory</code> instance.
     *
     * @param size The size of <code>MemoryArea</code> to allocate, in
     * bytes. If size is less than or equal to zero an
     * {@link IllegalArgumentException} is thrown.
     * @param logic -The <code> java.lang.Runnable</code> whose run() method is
     * invoked when any of the variations of enter() which do not take
     * a <code>java.lang.Runnable</code> is called.
     */
    public ScopedMemory(long size, Runnable logic) {
        super(size, logic);
    }


    /**
     * Creates a new <code>ScopedMemory</code> instance.
     *
     * @param size A {@link SizeEstimator} object which indicates the
     * amount of memory required by this <code>MemoryArea</code>.
     */
    public ScopedMemory(SizeEstimator size) {
        this(size.getEstimate(), null);
    }


    /**
     * Creates a new <code>ScopedMemory</code> instance.
     *
     * @param size The size of <code>MemoryArea</code> to
     * allocate, in bytes.
     * @param logic The run() method of this object will be called
     * whenever <code> enter()</code> called.
     */
    public ScopedMemory(SizeEstimator size, Runnable logic) {
        this(size.getEstimate(), logic);
    }


    /** 
     * Get the maximum size this memory area can attain. If this is
     * a fixed size memorea area, the returned value will be equal 
     * to the initial size.
     *
     * @return The maximum size attainable.
     */
    public long getMaximumSize()
    {
        return this.sizeInBytes;
    }

    
    /**
     * Returns a reference to the portal object in this instance of
     * <code> ScopedMemory </code>
     *
     * @return A reference to the portal or <b>null</b> if there is no
     * portal set.
     */
    public native Object getPortal();

    /**
     * Set the argument to the portal object in the memory area
     * represented by this instance of <code>ScopedMemory</code>. <p>
     * A portal can serve as a means of interthread communication and
     * they are used primarily when threads need to share an object
     * that is allocated in a <code>ScopedMemory</code>. The portal
     * object for a ScopedMemory must be allocated in a
     * <code>ScopedMemory</code> that is outer then the current. 
     *
     * @param portal The object which will become the portal for this.
     *               If null the previous portal object remains the
     *               portal object for this or if there was no previous
     *               portal object then there is still no portal object
     *               for this.
     */

    public native void setPortal(Object portal);


    /**
     * Returns the reference count of this <code>ScopedMemory</code>.
     * The reference count is an indication of the number of threads
     * that may have access to this scope.
     *
     * @return The reference count of this <code>ScopedMemory</code>.
     */
    public native int getReferenceCount();

    /**
     * Wait until the reference count of this
     * <code>ScopedMemory</code> goes down to zero.
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
     * <code>ScopedMemory</code> to go down to zero.
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
     * the reference count on this <code>ScopedMemory</code> to reach
     * zero, then enter the <code>ScopedMemory</code> and execute the
     * <code>run</code> method from <code>logic</code> passed in the
     * constructor. If no Runnable was passed, the method returns
     * immediately.
     *
     * @exception InterruptedException If another thread interrupts
     * this thread while it is waiting.
     * @exception ScopedCycleException If entering this
     * <code>ScopedMemory</code> would violate the single parent rule.
     */
    public void joinAndEnter() throws InterruptedException, ScopedCycleException {
        if (this.logic == null)
            throw new IllegalArgumentException("No Runnable associated with this Memory Area");
        
        RealtimeThread currentThread = RealtimeThread.currentRealtimeThread();

        synchronized (this.joinSynchronizer) {
            if (this.getReferenceCount() != 0) {
                this.joinSynchronizer.wait();
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
                if (this.getReferenceCount() == 0)
                    this.joinSynchronizer.notify();
            }
            
        }
    }

    /**
     * Combine <code>join(time);enter();</code> such that no
     * <code>enter</code> from another thread can intervene between
     * the two method invocations. The resulting method will wait for
     * the reference count on this <code>ScopedMemory</code> to reach
     * zero, or for the current time to reach the designated time,
     * then enter the <code>ScopedMemory</code> and execute the
     * <code>run</code> method from <code>Runnable</code> object
     * passed at constructin time. If no <code>Runnable</code> was
     * passed then this method returns immediately.
     *
     * @param time The time that bounds the wait.
     * @exception InterruptedException if another thread interrupts
     * this thread while it is waiting.
     * @exception ScopedCycleException If entering this
     * <code>ScopedMemory</code> would violate the single parent rule.
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
                if (this.getReferenceCount() == 0)
                    this.joinSynchronizer.notify();
            }
        }
    }

    /**
     * Combine <code>join();enter(logic);</code> such that no
     * <code>enter</code> from another thread can intervene between
     * the two method invocations. The resulting method will wait for
     * the reference count on this <code>ScopedMemory</code> to reach
     * zero, then enter the <code>ScopedMemory</code> and execute the
     * <code>run</code> method from <code>logic</code>
     *
     * @param logic The {@link Runnable} object which contains the
     * code to execute.
     * @exception InterruptedException If another thread interrupts
     * this thread while it is waiting.
     * @exception ScopedCycleException If entering this
     * <code>ScopedMemory</code> would violate the single parent rule.
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
                if (this.getReferenceCount() == 0)
                    this.joinSynchronizer.notify();
            }
        }
    }

    /**
     * Combine <code>join(time);enter(logic);</code> such that no
     * <code>enter</code> from another thread can intervene between
     * the two method invocations. The resulting method will wait for
     * the reference count on this <code>ScopedMemory</code> to reach
     * zero, or for the current time to reach the designated time,
     * then enter the <code>ScopedMemory</code> and execute the
     * <code>run</code> method from <code>logic</code>.
     *
     * @param logic The {@link Runnable} object which contains the
     * code to execute.
     * @param time The time that bounds the wait.
     * @exception InterruptedException if another thread interrupts
     * this thread while it is waiting.
     * @exception ScopedCycleException If entering this
     * <code>ScopedMemory</code> would violate the single parent rule.
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
                if (this.getReferenceCount() == 0)
                    this.joinSynchronizer.notify();
            }
        }
    }
    
    /**
     * Returns a user-friendly representation of this
     * <code>ScopedMemory</code>.
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
     * @exception ScopedCycleException If entering this ScopedMemory
     * would violate the single parent rule.
     */
    public void enter(Runnable logic) throws ScopedCycleException {
        RealtimeThread currentThread = RealtimeThread.currentRealtimeThread();
        
        if (logic == null)
            throw new IllegalArgumentException("No Runnable associated with this Memory Area");

        synchronized (this.joinSynchronizer) {
            // Push this memory area on the current real-time thread stack 
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
                if (this.getReferenceCount() == 0)
                    joinSynchronizer.notify();
            }
        }
    }
}
