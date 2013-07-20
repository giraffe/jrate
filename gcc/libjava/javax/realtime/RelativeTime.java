// ************************************************************************
//    $Id: RelativeTime.java 416 2004-02-22 18:35:45Z corsaro $
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
 * An object that represents a time interval millis/1E3 + nanos/1E9
 * seconds long. It generally is used to represent a time relative to
 * now. If the value of any of the millisecond or nanosecond fields is
 * negative the variable is set to negative value. Although logically
 * this may represent time before the epoch, invalid results may occur
 * if an instance of RelativeTime representing time before the epoch
 * is given as a parameter to the a method. For add and subtract
 * negative values behave just like they do in arithmetic.<br><br>
 *
 * <b>Caution:</b> This class is explicitly unsafe in multithreaded
 * situations when it is being changed. No synchronization is done. It
 * is assumed that users of this class who are mutating instances will
 * be doing their own synchronization at a higher level.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public class RelativeTime extends HighResolutionTime {

    /**
     * Equivalent to new RelativeTime(0,0).
     *
     */
    public RelativeTime() {
        super(0, 0);
    }

    /**
     * Construct a new RelativeTime object from the given millisecond
     * and nanosecond components.
     *
     * @param millis  a <code>long</code> value specifing the seconds
     * components
     * @param nanos an <code>int</code> value specifing the nano
     * seconds componenet
     */
    public RelativeTime(long millis, int nanos) {
        super(millis, nanos);
    }

    /**
     * Construct a new RelativeTime object from the given RelativeTime.
     *
     * @param relativeTime a <code>RelativeTime</code> value from
     * which the time for this object will be taken
     */
    public RelativeTime(RelativeTime relativeTime) {
        super(relativeTime.getMilliseconds(), relativeTime.getNanoseconds());
    }


    /**
     * Convert this time to an absolute time, relative to some clock. 
     * Convenient for situations where you really need an absolute
     * time. Allocates a destination object.
     *
     * @param clock The clock is used to convert this time into
     * absolute time.
     * @return the computed absolute time.
     */
    public AbsoluteTime absolute(Clock clock) {
        AbsoluteTime result = clock.getTime();
        result.set(this.getMilliseconds() + result.getMilliseconds(),
                   this.getNanoseconds() + result.getNanoseconds());
        return result;
    }


    /**
     * Convert this time to an absolute time, relative to some clock. 
     * Convenient for situations where you really need an absolute
     * time.
     *
     * @param clock The clock is used to convert this time into
     * absolute time.
     * @param dest the destination for the computed absolute time.
     */
    public void absolute(Clock clock, AbsoluteTime dest) {
        clock.getTime(dest);
        dest.set(this.getMilliseconds() + dest.getMilliseconds(),
                 this.getNanoseconds() + dest.getNanoseconds());
    }


    /**
     * Return this + time. A new object is allocated for the result.
     *
     * @param time -the time to add to this.
     * @return the sum of this and the time passed as argument.
     */
    public final RelativeTime add(RelativeTime time) {
        return new RelativeTime(this.getMilliseconds() + time.getMilliseconds(),
                                this.getNanoseconds() + time.getNanoseconds());
    }


    /**
     * Return this + time. If destination is non-null, the result is
     * placed there and dest is returned. Otherwise a new object is
     * allocated for the result.
     *
     * @param time the time to add to this.
     * @param dest where the result should be placed.
     */
    public void add(RelativeTime time, RelativeTime dest) {
        dest.set(this.getMilliseconds() + time.getMilliseconds(),
                 this.getNanoseconds() + time.getNanoseconds());
    }
    

    /**
     * Add a specific number of milli and nano seconds to this . A new
     * object is allocated.
     *
     * @param millis milli seconds to add.
     * @param nanos nano seconds to add.
     * @return A new object containing the result.
     */
    public RelativeTime add(long millis, int nanos) {
        return new RelativeTime(this.getMilliseconds() + millis,
                                this.getNanoseconds() + nanos);
    }

    /**
     * Add a specific number of milli and nano seconds to this. 
     *
     * @param millis milli seconds to add.
     * @param nanos nano seconds to add.
     * @param destination the destination were to store the result.
     */
    public void add(long millis, int nanos, RelativeTime destination) {
        destination.set(this.getMilliseconds() + millis,
                        this.getNanoseconds() + nanos);
    }


    /**
     * Computes the diffenrence (this - time).
     *
     * @param time relative time to subtract from this.
     * @return The new object is allocated for the result.
     */
    public final RelativeTime subtract(RelativeTime time) {
        return new RelativeTime(this.getMilliseconds() - millis,
                                this.getNanoseconds() - nanos);
    }


    /**
     * Computes the diffenrence (this - time).
     *
     * @param time relative time to subtract from this.
     * @param destination the destination object that will hold the result.
     */
    public final void subtract(RelativeTime time, RelativeTime destination) {
        destination.set(this.getMilliseconds() - millis,
                        this.getNanoseconds() - nanos);
    }

    /**
     * Increments this time, by a given ammount.
     *
     * @param time the increment represented by a a
     * <code>RelativeTime</code> value
     */
    public void increment(RelativeTime time) {
        this.set(this.getMilliseconds() + time.getMilliseconds(),
                 this.getNanoseconds() + time.getNanoseconds());
    }

    /**
     * Increment this time by a given amount.
     *
     * @param time the decrement represented by a a
     * <code>RelativeTime</code> value.
     */
    public void decrement(RelativeTime time) {
        this.set(this.getMilliseconds() - time.getMilliseconds(),
                 this.getNanoseconds() - time.getNanoseconds());
    }

    
    /**
     * Return a printable version of this time.
     *
     * @return String object converted from this.
     */
    public String toString() {
        Double d = new Double(this.getMilliseconds() + ((double)this.getNanoseconds())/1000000);
        return d.toString();
    }
}
