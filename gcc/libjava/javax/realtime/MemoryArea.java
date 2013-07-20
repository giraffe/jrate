// ************************************************************************
//    $Id: MemoryArea.java 474 2005-01-24 11:03:10Z mdeters $
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

/**
 * MemoryArea is the abstract base class of all classes dealing with
 * the representations of allocatable memory areas, including the
 * immortal memory area, physical memory and scoped memory areas.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public abstract class MemoryArea {

    protected long sizeInBytes = 0;
    protected Runnable logic;
    protected MemoryArea parent = null;

    RawData ma_;
        
    // Let only sublclasses be able to create instances of this class.
    protected MemoryArea() {
        this.init();
    }

    
    /**
     * Creates a new <code>MemoryArea</code> instance.
     *
     * @param sizeInBytes The size of <code>MemoryArea</code> to
     * allocate, in bytes.
     */
    protected MemoryArea(long sizeInBytes) {
        this(sizeInBytes, null);
    }
    
    /**
     * Creates a new <code>MemoryArea</code> instance.
     *
     * @param sizeInBytes The size of <code>MemoryArea</code> to
     * allocate, in bytes.
     * @param logic The run() method of this object will be called
     * whenever <code> enter()</code> called.
     */
    protected MemoryArea(long sizeInBytes, Runnable logic) {
        if (sizeInBytes <= 0)
            throw new IllegalArgumentException("The memory area size has to be a positive number");
        this.sizeInBytes = sizeInBytes;
        this.logic = logic;
        this.init();
    }


    /**
     * Creates a new <code>MemoryArea</code> instance.
     *
     * @param size A {@link SizeEstimator} object which indicates the amount
     * of memory required by this <code>MemoryArea</code>.
     */
    protected MemoryArea(SizeEstimator size) {
        this(size.getEstimate());
    }

    /**
     * Creates a new <code>MemoryArea</code> instance.
     *
     * @param size A {@link SizeEstimator} object which indicates the amount
     * of memory required by this <code>MemoryArea</code>.
     * @param logic -The <code>run()</code> method of this object will
     * be called whenever <code>enter()</code> is called.
     */
    protected MemoryArea(SizeEstimator size, Runnable logic) {
        this(size.getEstimate(), logic);
    }

    
    /**
     * Associate this memory area to the current real-time thread for
     * the duration of the execution of the run() method of the
     * java.lang.Runnable passed at construction time. During this
     * bound period of execution, all objects are allocated from the
     * memory area until another one takes effect, or the enter()
     * method is exited. A runtime exception is thrown if this method
     * is called from thread other than a {@link RealtimeThread} or
     * {@link NoHeapRealtimeThread}.
     *
     * @exception ScopedCycleException If entering this ScopedMemory
     * would violate the single parent rule.
     */
    public void enter() throws ScopedCycleException {
        this.enter(this.logic);
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
        
        // Push this memory area on the current real-time thread stack
        if (currentThread.pushMemoryArea(this) == false)
            throw new ScopedCycleException("Entering this memory area would create a cycle!"); 
        try {
            // Run the logic
            guardedRun(logic);
        } finally { 
            // Pop this memory area on the current real-time thread stack
            currentThread.popMemoryArea();
            currentThread = null;
        }
    }


    /**
     * Run the given logic and, if it exits exceptionally, check to
     * ensure that the thrown exception is valid in the parent scope.
     * If so, rethrow; otherwise, throw a {@link ThrowBoundaryError}
     * instead.
     * @param logic The Runnable object whose run() method should be
     * invoked and checked for exceptional exit.
     */
    protected native final void guardedRun(Runnable logic);


    /**
     * Execute the run method from the logic parameter using this
     * memory area as the current allocation context. If the memory
     * area is a scoped memory type, this method behaves as if it had
     * moved the allocation context up the scope stack to the
     * occurrence of the memory area. If the memory area is heap or
     * immortal memory, this method behaves as if the run method were
     * running in that memory type with an empty scope stack.
     *
     * @param logic The runnable object whose <code>run()</code>
     * method should be executed.
     * @exception InaccessibleAreaException The memory area is not in
     * the thread s scope stack.
     */
    public void executeInArea(Runnable logic) throws InaccessibleAreaException {
        RealtimeThread currentThread = RealtimeThread.currentRealtimeThread();
        
        if (logic == null)
            throw new IllegalArgumentException("No Runnable associated with this Memory Area");
        
        if (currentThread.executeInMemoryArea(this, logic) == false)
            throw new ScopedCycleException("The memory area is not accessible from the current thread"); 
    }

    /**
     * Returns the MemoryArea in which the given object is located.
     *
     * @param object the object for which the associated memory area
     * will be provided.
     * @return The MemoryArea of the object.
     */
    public native static MemoryArea getMemoryArea(Object object);

    /**
     * An exact count, in bytes, of the all of the memory currently
     * used by the system for the allocated objects.
     *
     * @return The amount of memory consumed in bytes.
     */
    public abstract long memoryConsumed();
    /**
     * An approximation to the total amount of memory currently
     * available for future allocated objects, measured in bytes.
     *
     * @return The amount of remaining memory in bytes.
     */
    public abstract long memoryRemaining();


    /**
     * Allocate an array of T in this memory area. 
     *
     * @param type The class of the elements of the new array.
     * @param number The number of elements in the new array.
     * @return A new array of class type, of number elements.
     * @exception IllegalAccessException The class or initializer is inaccessible.
     * @exception InstantiationException The array cannot be instantiated.
     */
    public native Object newArray(Class type, int number)
        throws IllegalAccessException, InstantiationException;

    native Object unchecked_newArray(Class type, int number)
        throws IllegalAccessException, InstantiationException;


    /**
     * Allocate an object in this memory area.
     *
     * @param type The class of which to create a new instance.
     * @return A new instance of class type.
     * @exception IllegalAccessException The class or initializer is inaccessible.
     * @exception InstantiationException The specified class object
     * could not be instantiated. Possible causes are: it is an
     * interface, it is abstract, it is an array, or an exception was
     * thrown by the constructor.
     */
    public native Object newInstance(Class type) 
        throws IllegalAccessException, InstantiationException;

    native Object unchecked_newInstance(Class type) 
        throws IllegalAccessException, InstantiationException;

    /**
     * Allocates an object in this memory area.
     *
     * @param ctor the constructor used to create the new instance.
     * @param args the argument to be passed to the constructor.
     * @return the object allocated
     * @exception IllegalAccessException The class or initializer is inaccessible. 
     * @exception InstantiationException The specified class object
     * could not be instantiated. Possible causes are: it is an
     * interface, it is abstract, it is an array, or an exception was
     * thrown by the constructor.
     */
    public native Object newInstance(java.lang.reflect.Constructor ctor, Object[] args)
        throws IllegalAccessException, InstantiationException;

    native Object unchecked_newInstance(java.lang.reflect.Constructor ctor, Object[] args)
        throws IllegalAccessException, InstantiationException;


    /**
     * Query the size of the memory area. The returned value is the
     * current size. Current size may be larger than initial size for
     * those areas that are allowed to grow.
     *
     * @return the size of the memory area in bytes.
     */
    public long size() {
        return this.sizeInBytes;
    }

    protected abstract void init();
    protected abstract void fini();

    protected void finalize() { this.fini(); }
}

