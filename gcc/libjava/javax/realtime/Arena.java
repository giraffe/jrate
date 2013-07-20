// ************************************************************************
//    $Id: Arena.java 416 2004-02-22 18:35:45Z corsaro $
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
 * <code>Arena</code> is the base class for all those memory areas
 * whose lifetime depends on reachability. Depending on the type of
 * <code>Arena</code>, the objects allocated within it are collected
 * either based on reachability or all at once.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public abstract class Arena extends MemoryArea {

    /**
     * Creates a new <code>Arena</code> instance.
     *
     * @param size a <code>long</code> value indicating the
     * <code>Arena</code> size
     */
    protected Arena(long size) { super(size); } 

    /**
     * Creates a new <code>Arena</code> instance.
     *
     * @param size a <code>long</code> value indicating the
     * <code>Arena</code> size
     */
    protected Arena(SizeEstimator size) { super(size.getEstimate()); }

    /**
     * Creates a new <code>Arena</code> instance.
     *
     * @param size a <code>long</code> value indicating the
     * <code>RefCountedArena</code> size
     * @param logic a <code>Runnable</code> value
     */
    protected Arena(long size, Runnable logic) { super(size, logic); } 

    /**
     * Creates a new <code>RefCountedArena</code> instance.
     *
     * @param size a <code>long</code> value indicating the
     * <code>RefCountedArena</code> size
     */
    protected Arena(SizeEstimator size, Runnable logic) { super(size.getEstimate(), logic); }
    
    /** 
     * Get the maximum size this memory area can attain. If this is a
     * fixed size memorea area, the returned value will be equal to
     * the initial size.
     *
     * @return The maximum size attainable.
     */
    public long getMaximumSize() { return this.sizeInBytes; }

    
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
     * If null the previous portal object remains the portal object
     * for this or if there was no previous portal object then there
     * is still no portal object for this.
     */ 
    public native void setPortal(Object portal);
}
