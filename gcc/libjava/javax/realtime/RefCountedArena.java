// ************************************************************************
//    $Id: RefCountedArena.java 416 2004-02-22 18:35:45Z corsaro $
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
 * The <code>RefCountedArena</code> class implements a reference
 * counted arena. A RefCountedArena is alive if there are live objects
 * or root pointer pointing to it or if there are external references
 * to the objects allocated within the arena.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public class RefCountedArena extends Arena {
    
    /**
     * Creates a new <code>Arena</code> instance.
     *
     * @param size a <code>long</code> value indicating the
     * <code>RefCountedArena</code> size
     */
    RefCountedArena(long size) { super(size); } 

    /**
     * Creates a new <code>RefCountedArena</code> instance.
     *
     * @param size a <code>long</code> value indicating the
     * <code>RefCountedArena</code> size
     */
    RefCountedArena(SizeEstimator size) { super(size.getEstimate()); }


    /**
     * Creates a new <code>Arena</code> instance.
     *
     * @param size a <code>long</code> value indicating the
     * <code>RefCountedArena</code> size
     * @param logic a <code>Runnable</code> value
     */
    RefCountedArena(long size, Runnable logic) { super(size, logic); } 

    /**
     * Creates a new <code>RefCountedArena</code> instance.
     *
     * @param size a <code>long</code> value indicating the
     * <code>RefCountedArena</code> size
     */
    RefCountedArena(SizeEstimator size, Runnable logic) { super(size.getEstimate(), logic); }
    
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

    
    protected native void init();
    protected native void fini(); 
}

