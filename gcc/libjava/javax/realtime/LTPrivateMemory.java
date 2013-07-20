// ************************************************************************
//    $Id: LTPrivateMemory.java 416 2004-02-22 18:35:45Z corsaro $
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
 * The <code>LTPrivateMemory</code> provides linear time allocation
 * time. This type of scoped memory allows only one thread at the time
 * to be within it. Thus it can be considered as a thread
 * <i>private</i> memory. If more than one thread try to access it at
 * the same time a run-time exception is thrown.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public class LTPrivateMemory extends PrivateScopedMemory {
    
    /**
     * Creates a new <code>LTPrivateMemory</code> instance.
     *
     * @param minSize a <code>long</code> value representing the
     * minimum size for this memory.
     * @param maxSize a <code>long</code> value representing the max
     * size for this memory area.
     */
    public LTPrivateMemory(long minSize, long maxSize) {
        this(maxSize, null);
    }

    
    /**
     * Creates a new <code>LTPrivateMemory</code> instance.
     *
     * @param size The size of <code>MemoryArea</code> to allocate, in
     * bytes. If size is less than or equal to zero an
     * {@link IllegalArgumentException} is thrown.
     */
    public LTPrivateMemory(long size) {
        this(size, null);
    }

    
    /**
     * Creates a new <code>LTPrivateMemory</code> instance.
     *
     * @param size The size of <code>MemoryArea</code> to allocate, in
     * bytes. If size is less than or equal to zero an
     * {@link IllegalArgumentException} is thrown.
     * @param logic -The <code> java.lang.Runnable</code> whose run() method is
     * invoked when any of the variations of enter() which do not take
     * a <code>java.lang.Runnable</code> is called.
     */
    public LTPrivateMemory(long size, Runnable logic) {
        super(size, logic);
    }

    /**
     * Creates a new <code>LTPrivateMemory</code> instance.
     *
     * @param size A {@link SizeEstimator} object which indicates the
     * amount of memory required by this <code>MemoryArea</code>.
     */
    public LTPrivateMemory(SizeEstimator size) {
        this(size.getEstimate(), null);
    }

    /**
     * Creates a new <code>LTPrivateMemory</code> instance.
     *
     * @param size The size of <code>MemoryArea</code> to
     * allocate, in bytes.
     * @param logic The run() method of this object will be called
     * whenever <code> enter()</code> called.
     */
    public LTPrivateMemory(SizeEstimator size, Runnable logic) {
        this(size.getEstimate(), logic);
    }


    /**
     * An exact count, in bytes, of the all of the memory currently
     * used by the system for the allocated objects.
     *
     * @return The amount of memory consumed in bytes.
     */
    public native long memoryConsumed(); 
    

    /**
     * An approximation to the total amount of memory currently
     * available for future allocated objects, measured in bytes.
     *
     * @return The amount of remaining memory in bytes.
     */
    public native long memoryRemaining();

    
    // -- Native Methods --
    protected native void init();
    protected native void fini();
}
