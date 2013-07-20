// ************************************************************************
//    $Id: jRateSystem.java 416 2004-02-22 18:35:45Z corsaro $
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
 * The class <code>jRateSystem</code> contains information about
 * jRate's runtime and configuration.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
class jRateSystem {

    private static MemoryArea immortalMemory = ImmortalMemory.instance();
    private static MemoryArea heap = HeapMemory.instance();
    private static MemoryArea methodArea = MethodAreaMemory.instance();
    
    
    /**
     * Returns the scheduling policy that is used to scheduler Java
     * Threads.
     *
     * @return an <code>int</code> value representing the scheduling
     * policy.
     */
    public static native int getThreadSchedulingPolicy();

    /**
     * Returns the scheduling policy that is used to scheduler Java
     * Real-Time Threads.
     *
     * @return an <code>int</code> value representing the scheduling
     * policy.
     */
    public static native int getRealtimeThreadSchedulingPolicy();


    /**
     * Returns an instance to the singleton ImmortalMemory.
     *
     * @return a <code>MemoryArea</code> value
     */
    public static MemoryArea getImmortalMemory() {
        return jRateSystem.immortalMemory;
    }

    /**
     * Returns an instance of the singleton Heap. 
     *
     * @return a <code>MemoryArea</code> value
     */
    public static MemoryArea getHeap() {
        return jRateSystem.heap;
    }
    
    /**
     * Returns an instance to the singleton MethodArea
     *
     * @return a <code>MemoryArea</code> value
     */
    public static MemoryArea getMethodArea() {
        return methodArea;
    }
}
