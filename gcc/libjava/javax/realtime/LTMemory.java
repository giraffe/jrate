// ************************************************************************
//    $Id: LTMemory.java 416 2004-02-22 18:35:45Z corsaro $
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

public class LTMemory extends ScopedMemory {

    /**
     * Creates a new <code>LTMemory</code> instance.
     *
     * @param minSize a <code>long</code> value representing the
     * minimum size for this memory.
     * @param maxSize a <code>long</code> value representing the max
     * size for this memory area.
     */
    public LTMemory(long minSize, long maxSize) {
        this(maxSize, null);
    }

    /**
     * Creates a new <code>LTMemory</code> instance.
     *
     * @param size The size of <code>MemoryArea</code> to
     * allocate, in bytes.
     * @param logic The run() method of this object will be called
     * whenever <code> enter()</code> called.
     */
    public LTMemory(SizeEstimator size, Runnable logic) {
        this(size.getEstimate(), logic);
    }


    /**
     * Creates a new <code>LTMemory</code> instance.
     *
     * @param size The size of <code>MemoryArea</code> to allocate, in
     * bytes. If size is less than or equal to zero an
     * {@link IllegalArgumentException} is thrown.
     * @param logic -The <code> java.lang.Runnable</code> whose run() method is
     * invoked when any of the variations of enter() which do not take
     * a <code>java.lang.Runnable</code> is called.
     */
    public LTMemory(long size, Runnable logic) {
        super(size, logic);
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

