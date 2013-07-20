// ************************************************************************
//    $Id: MethodAreaMemory.java 416 2004-02-22 18:35:45Z corsaro $
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
 * This class encapsulates the JVM (or GCJ run-time) method area. This
 * is the region of memory in which classes information are stored. 
 * jRate provide a way of configuring the type of MethodArea. 
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public class MethodAreaMemory extends MemoryArea {


    private static MethodAreaMemory theInstance;
    
    static {
        theInstance = new MethodAreaMemory();
    }

    /**
     * Returns a reference to the singleton MemoryArea space.
     *
     * @return The singleton MemoryArea object.
     */
    public static MethodAreaMemory instance() {
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
 
    private MethodAreaMemory() {
        //
        // The size for this memory is setup by the C++ portion of the
        // runtime since the peer has to be in place before class
        // loading and initialization begins.
        //
    }

    protected native void init();
    
    protected native void fini();
}
