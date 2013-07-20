// ************************************************************************
//    $Id: ImmortalMemory.java 416 2004-02-22 18:35:45Z corsaro $
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
 * <code>ImmortalMemory</code> is a memory resource that is shared
 * among all threads. Objects allocated in the immortal memory live
 * until the end of the application. Objects in immortal memory are
 * never subject to garbage collection, although some GC algorithms
 * may require a scan of the immortal memory. An immortal object may
 * only contain reference to other <em>immortal</em> objects or to
 * heap objects. Unlike standard Java heap objects, immortal objects
 * continue to exist even after there are no other references to them.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public final class ImmortalMemory extends MemoryArea {

    static ImmortalMemory theInstance;
    
    static {
        theInstance = new ImmortalMemory();
    }

    private ImmortalMemory(long sizeInBytes) {
        super(sizeInBytes);
    }
    
    private ImmortalMemory() {
        this(90000000L);
    }

    
    /**
     * Returns a reference to the singleton ImmortalMemory space.
     *
     * @return The singleton ImmortalMemory object.
     */
    public static ImmortalMemory instance() {
        return theInstance;
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
