// ************************************************************************
//    $Id: VTMemory.java 416 2004-02-22 18:35:45Z corsaro $
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

public class VTMemory extends ScopedMemory {

    /**
     * Creates a new <code>VTMemory</code> instance.
     *
     * @param minSize a <code>long</code> value representing the
     * minimum size for this memory.
     * @param maxSize a <code>long</code> value representing the max
     * size for this memory area.
     */
    public VTMemory(long minSize, long maxSize) {
        super(maxSize);
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

