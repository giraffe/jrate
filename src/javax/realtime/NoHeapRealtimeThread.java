// ************************************************************************
//    $Id: NoHeapRealtimeThread.java 416 2004-02-22 18:35:45Z corsaro $
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
 * A <code>NoHeapRealtimeThread</code> is a specialized form of {@link
 * RealtimeThread}. Because an instance of
 * <code>NoHeapRealtimeThread</code> may immediately preempt any
 * implemented garbage collector logic contained in its
 * <code>run()</code> is never allowed to allocate or reference any
 * object allocated in the heap nor is it even allowed to manipulate
 * any reference toany object in the heap. For example, if a and b are
 * objects in immortal memory, b.p is reference to an object on the
 * heap, and a.p is type compatible with b.p, then a
 * NoHeapRealtimeThread is not allowed to execute anything like the
 * following: <p>
 * <code>
 *               a.p = b.p; b.p = null;
 * </code><p>
 *
 * Thus,it is always safe for a <code>NoHeapRealtimeThread</code> to
 * interrupt the garbage collector at any time, without waiting for
 * the end of the garbage collection cycle or a defined preemption
 * point. Due to these restrictions, a
 * <code>NoHeapRealtimeThread</code> object must be placed in a memory
 * area such that thread logic may unexceptionally access instance
 * variables and such that Java methods on {@link java.lang.Thread}
 * (e.g., enumerate and join) complete normally except where execution
 * would cause access violations. The constructors of
 * <code>NoHeapRealtimeThread</code> require a reference to {@link
 * ScopedMemory} or {@link ImmortalMemory} . When the thread is
 * started, all execution occurs in the scope of the given memory
 * area. Thus, all memory allocation performed with the new operator
 * is taken from this given area. Parameters for constructors may be
 * null . In such cases the default value will be the default value
 * set for the particular type by the associated instance of {@link
 * Scheduler}.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public class NoHeapRealtimeThread extends RealtimeThread {

    // TODO: Finish Implementation.

    /**
     * Creates a new <code>NoHeapRealtimeThread</code> instance with the
     * given characteristics.
     *
     * @param schedulingParam The {@link SchedulingParameters}
     * associated with this (and possibly other instances of
     * <code>NoHeapRealtimeThread<code>).
     * @param memoryArea The {@link MemoryArea} associated with this.
     */
    public NoHeapRealtimeThread(SchedulingParameters schedulingParam,
                                MemoryArea memoryArea)
    {
        this(schedulingParam,
             null,
             null,
             memoryArea,
             null,
             null);
    }


    /**
     * Creates a new <code>NoHeapRealtimeThread</code> instance with the
     * given characteristics and a <code>java.lang.Runnable</code>.
     *
     * @param schedulingParam The {@link SchedulingParameters}
     * associated with this (and possibly other instances of
     * <code>NoHeapRealtimeThread<code>).
     * @param releaseParam The {@link ReleaseParameters} associated
     * with this (and possibly other instances of <code>NoHeapRealtimeThread</code>).
     * @param memoryArea The {@link MemoryArea} associated with this.
     *
     */
    public NoHeapRealtimeThread(SchedulingParameters schedulingParam,
                                ReleaseParameters releaseParam,
                                MemoryArea memoryArea)
    {
        super(schedulingParam,
              releaseParam,
              null,
              memoryArea,
              null,
              null);
    }

    
    /**
     * Creates a new <code>NoHeapRealtimeThread</code> instance with the
     * given characteristics and a <code>java.lang.Runnable</code>.
     *
     * @param schedulingParam The {@link SchedulingParameters}
     * associated with this (and possibly other instances of
     * <code>NoHeapRealtimeThread<code>).
     * @param releaseParam The {@link ReleaseParameters} associated
     * with this (and possibly other instances of <code>NoHeapRealtimeThread</code>).
     * @param memoryParam The {@link MemoryParameters} associated with
     * this (and possibly other instances of <code>NoHeapRealtimeThread</code>).
     * @param memoryArea The {@link MemoryArea} associated with this.
     * @param groupParam -The {@link ProcessingGroupParameters} associated
     * with this (and possibly other instances of <code>NoHeapRealtimeThread</code>).
     * @param logic the logic for this thread.
     */
    public NoHeapRealtimeThread(SchedulingParameters schedulingParam,
                                ReleaseParameters releaseParam,
                                MemoryParameters memoryParam,
                                MemoryArea memoryArea,
                                ProcessingGroupParameters groupParam,
                                Runnable logic)
    {
        super(schedulingParam,
              releaseParam,
              memoryParam,
              memoryArea,
              groupParam,
              logic);
    }


    /**
     * Creates a new <code>NoHeapRealtimeThread</code> instance. All
     * parameter values are null.
     *
     */
    public NoHeapRealtimeThread() {
        this(null, null, null, null, null, null);
    }

    /**
     * Creates a new <code>NoHeapRealtimeThread</code> instance. All
     * parameter values are null, but the logic.
     *
     * @param logic a <code>Runnable</code> representing the thread logic.
     */
    public NoHeapRealtimeThread(Runnable logic) {
        this(null, null, null, null, null, logic);
    }

}
