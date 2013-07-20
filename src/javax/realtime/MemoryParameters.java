// ************************************************************************
//    $Id: MemoryParameters.java 416 2004-02-22 18:35:45Z corsaro $
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
 * Memory parameters can be given on the constructor of {@link
 * RealtimeThread} and {@link AsyncEventHandler}. These can be used
 * both for the purposes of admission control by the scheduler and for
 * the purposes of pacing the garbage collector to satisfy all of the
 * thread allocation rates. When a reference to a
 * <code>MemoryParameters</code> object is given as a parameter to a
 * constructor, the <code>MemoryParameters</code> object becomes bound
 * to the object being created. Changes to the values in the
 * MemoryParameters object affect the constructed object. If given to
 * more than one constructor, then changes to the values in the
 * <code>MemoryParameters</code> object affect all of the associated
 * objects. Note that this is a one-to- many relationship and not a
 * many-to-many.<p>
 *
 * <b>Caution:</b> This class is explicitly unsafe in multithreaded
 * situations when it is being changed. No synchronization is done. It
 * is assumed that users of this class who are mutating instances will
 * be doing their own synchronization at a higher level.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public class MemoryParameters {

    protected long maxMemoryArea;
    protected long maxImmortal;
    protected long allocationRate;
    
    /**
     * Specifies no maximum limit for a given memory area.
     *
     */
    public static final long NO_MAX = -1;


    /**
     * Create a MemoryParameters object with the given values.
     *
     * @param maxMemoryArea A limit on the amount of memory the thread
     * may allocate in the memory area. Units are in bytes. If zero,
     * no allocation allowed in the memory area. To specify no limit,
     * use <code>NO_MAX</code> or a value less than zero.
     * @param maxImmortal A limit on the amount of memory the thread
     * may allocate in the immortal area. Units are in bytes. If zero,
     * no allocation allowed in immortal. To specify no limit, use
     * NO_MAX or a value less than zero.
     * @exception IllegalArgumentException 
     */
    public MemoryParameters(long maxMemoryArea, long maxImmortal) throws IllegalArgumentException {
        this.maxMemoryArea = maxMemoryArea;
        this.maxImmortal = maxImmortal;
    }


    /**
     * Creates a new <code>MemoryParameters</code> instance.
     *
     * @param maxMemoryArea A limit on the amount of memory the thread
     * may allocate in the memory area. Units are in bytes. If zero,
     * no allocation allowed in the memory area. To specify no limit,
     * use <code>NO_MAX</code> or a value less than zero.
     * @param maxImmortal A limit on the amount of memory the thread
     * may allocate in the immortal area. Units are in bytes. If zero,
     * no allocation allowed in immortal. To specify no limit, use
     * NO_MAX or a value less than zero.
     * @param allocationRate A limit on the rate of allocation in the
     * heap. Units are in bytes per second. If zero, no allocation is
     * allowed in the heap. To specify no limit, use NO_MAX or a value
     * less than zero.
     * @exception IllegalArgumentException 
     */
    public MemoryParameters(long maxMemoryArea, long maxImmortal, long allocationRate)
        throws IllegalArgumentException
    {
        this(maxMemoryArea, maxImmortal);
        this.allocationRate = allocationRate;
    }


    /**
     * Get the allocation rate. Units are in bytes per second.
     *
     * @return the allocation rate in byte/sec.
     */
    public long getAllocationRate() {
        return this.allocationRate;
    }

    /**
     * A limit on the rate of allocation in the heap.
     *
     * @param allocationRate Units are in bytes per second. If zero,
     * no allocation is allowed in the heap. To specify no limit, use
     * NO_MAX or a value less than zero.
     */
    public void setAllocationRate(long allocationRate) {
        this.allocationRate = allocationRate;
    }


    /**
     * Change the limit on the rate of allocation in the heap. If this
     * Memory-Parameters object is currently associated with one or
     * more realtime threads that have been passed admission control,
     * this change in allocation rate will be submitted to admission
     * control. The scheduler (in conjunction with the garbage
     * collector) will either admit all the effected threads with the
     * new allocation rate, or leave the allocation rate unchanged and
     * cause <code>setAllocationRateIfFeasible</code> to return
     * <code>false</code>.
     *
     * @param allocationRate Units are in bytes per second. If zero,
     * no allocation is allowed in the heap. To specify no limit, use
     * <code>NO_MAX</code> or a value less than zero.
     * @return <code>true</code> if the request was fulfilled.
     */
    public boolean setAllocationRateIfFeasible(int allocationRate) {
        // TODO: Add check to see if the allocation rate is feasible.
        this.allocationRate = allocationRate;
        return true;
    }
    
    /**
     * Get the limit on the amount of memory the thread may allocate
     * in the immortal area. Units are in bytes.
     *
     * @return the maximum amount of immortal memory that should be
     * used.
     */
    public long getMaxImmortal() {
        return this.maxImmortal;
    }

    /**
     * A limit on the amount of memory the thread may allocate in the
     * immortal area.
     *
     * @param maxImmortal Units are in bytes. If zero, no allocation
     * allowed in immortal. To specify no limit, use
     * <code>NO_MAX</code> or a value less than zero.
     * @return False if any of the threads have already allocated more
     * than the given value. In this case the call has no effect.
     */
    public boolean setMaxImmortalIfFeasible(long maxImmortal) {
        // TODO: Add check to see if the allocation rate is feasible.
        this.maxImmortal = maxImmortal;
        return true;
    }


    /**
     * A limit on the amount of memory the thread may allocate in the
     * memory area.
     *
     * @param maxMemoryArea Units are in bytes. If zero, no allocation
     * allowed in the memory area. To specify no limit, use
     * <code>NO_MAX</code> or a value less than zero.
     * @return False if any of the threads have already allocated more
     * than the given value. In this case the call has no effect.
     */
    public boolean setMaxMemoryAreaIfFeasible(long maxMemoryArea) {
        // TODO: Add check to see if the allocation rate is feasible.
        this.maxMemoryArea = maxMemoryArea;
        return true;
    }
}
