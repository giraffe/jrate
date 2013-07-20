// ************************************************************************
//    $Id: AbsoluteTime.java 416 2004-02-22 18:35:45Z corsaro $
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
 * An object that represents a specific point in time given by
 * milliseconds plus nanoseconds past the epoch (January 1, 1970,
 * 00:00:00 GMT). This representation was designed to be compatible
 * with the standard Java representation of an absolute time in the
 * java.util.Date class. If the value of any of the millisecond or
 * nanosecond fields is negative the variable is set to negative
 * value. Although logically this may represent time before the epoch,
 * invalid results may occur if an instance of AbsoluteTime
 * representing time before the epoch is given as a parameter to the a
 * method. For add and subtract negative values behave just like they
 * do in arithmetic.<br><br>
 *
 * <b>Caution:</b> This class is explicitly unsafe in multithreaded
 * situations when it is being changed. No synchronization is done. It
 * is assumed that users of this class who are mutating instances will
 * be doing their own synchronization at a higher level.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public class AbsoluteTime extends HighResolutionTime {

    /**
     * Equal to new AbsoluteTime(0,0).
     *
     */
    public AbsoluteTime() {
        super(0, 0);
    }

    /**
     * Construct an AbsoluteTime object which means a time millis
     * milliseconds plus nanos nanoseconds past 00:00:00 GMT on
     * January 1, 1970.
     *
     * @param millis The milliseconds component of the time past the
     * epoch.
     * @param nanos The nanosecond component of the time past the
     * epoch.
     */
    public AbsoluteTime(long millis, int nanos) {
        super(millis, nanos);
    }


    /**
     * Make a new AbsoluteTime object from the given AbsoluteTime object.
     *
     * @param time The AbsoluteTime object as the source for the copy.
     */
    public AbsoluteTime(AbsoluteTime time) {
        super(time.getMilliseconds(), time.getNanoseconds());
    }

    
    /**
     * Equivalent to new AbsoluteTime (date.getTime(),0)
     *
     * @param date The java.util.Data representation of the time past
     * the epoch.
     */
    public AbsoluteTime(java.util.Date date) {
        super(date.getTime(), 0);
    }

    /**
     * Add millis and nanos to this. A new object is allocated for the
     * result.
     *
     * @param millis the milliseconds value to be added to this.
     * @param nanos the nanoseconds value to be added to this.
     * @return the result after adding this with millis and nanos.
     */
    public AbsoluteTime add(long millis, int nanos) {
        return new AbsoluteTime(this.getMilliseconds() + millis,
                                this.getNanoseconds() + nanos);
    }
    

    /**
     * If a destination is non-null, the result is placed there and
     * the destination is returned. Otherwise a new object is
     * allocated for the result.
     *
     * @param millis milliseconds
     * @param nanos nanoseconds
     * @param dest the destination that will hold the addition
     */
    public void add(long millis, int nanos, AbsoluteTime dest) {
        dest.set(this.getMilliseconds() + millis,
                 this.getNanoseconds() + nanos);
    }
    

    /**
     * Return this + time. A new object is allocated for the result.
     *
     * @param time the time to add to this.
     * @return the resulting sum
     */
    public final AbsoluteTime add(RelativeTime time) {
        AbsoluteTime sum = new AbsoluteTime();
        sum.set(this.getMilliseconds() + time.getMilliseconds(),
                this.getNanoseconds() + time.getNanoseconds());

        return sum;
    }


    /**
     * Return this + time, into the provided destination. 
     *
     * @param time the time toa dd to this.
     * @param destination the destination where to place the result.
     */
    public final void add(RelativeTime time, AbsoluteTime destination) {
        destination.set(this.getMilliseconds() + time.getMilliseconds(),
                        this.getNanoseconds() + time.getNanoseconds());
    }


    /**
     * Increments this time, by a given ammount.
     *
     * @param time a <code>RelativeTime</code> value
     */
    public void increment(RelativeTime time) {
        this.set(this.getMilliseconds() + time.getMilliseconds(),
                 this.getNanoseconds() + time.getNanoseconds());
    }

    /**
     * Increment this time by a given amount.
     *
     * @param time a <code>RelativeTime</code> value
     */
    public void decrement(RelativeTime time) {
        this.set(this.getMilliseconds() - time.getMilliseconds(),
                 this.getNanoseconds() - time.getNanoseconds());
    }
    
    /**
     * Returns this time as a Date.
     *
     * @return The time past the epoch represented by this as a
     * java.util.Date.
     */
    public java.util.Date getDate() {
        return new java.util.Date(this.getMilliseconds() +
                                  + (this.getNanoseconds() / 1000000));
    }


    /**
     * Returns the <code>RelativeTime</code> that this time represents
     * respect to the given <code>Clock</code>.
     *
     * @param clock The clock that has to be used to determine the
     * relative time representing the difference between this and the
     * current time marked by <code>Clock</code>.
     * @return the relative time that subtracted to this would give
     * the time that the clock is currently marking.
     */
    public RelativeTime relative(Clock clock) {
        return this.subtract(clock.getTime());
    }


    /**
     * Computes the diffenrence (this - time).
     *
     * @param time absolute time to subtract from this.
     * @return the new object allocated for the result.
     */
    public final RelativeTime subtract(AbsoluteTime time) {
        RelativeTime result =
            new RelativeTime(this.getMilliseconds() - time.getMilliseconds(),
                             this.getNanoseconds() - time.getNanoseconds());
        return result;
    }

    /**
     * Computes the diffenrence (this - time).
     *
     * @param time absolute time to subtract from this.
     * @param destination the destination that will hold the result of the difference. 
     */
    public final void  subtract(AbsoluteTime time, RelativeTime destination) {
        destination.set(this.getMilliseconds() - time.getMilliseconds(),
                        this.getNanoseconds() - time.getNanoseconds());
    }


    /**
     * Computes the diffenrence (this - time).
     *
     * @param time relative time to subtract from this
     * @return a newly allocated object that holds the result of the
     * difference.
     */
    public final AbsoluteTime subtract(RelativeTime time) {
        AbsoluteTime result =
            new AbsoluteTime(this.getMilliseconds() - time.getMilliseconds(),
                             this.getNanoseconds() - time.getNanoseconds());
        return result;
    }


    /**
     * Computes the diffenrence (this - time).
     *
     * @param time relative time to subtract from this.
     * @param dest the destination that will hold the result of the
     * difference.
     */
    public final void subtract(RelativeTime time, AbsoluteTime dest) {
        dest.set(this.getMilliseconds() - time.getMilliseconds(),
                 this.getNanoseconds() - time.getNanoseconds());
    }


    /**
     * Return a printable version of this time, in a format that
     * matches java.util.Date.toString() with a postfix to the detail
     * the sub-second value.
     *
     * @return String object converted from this.
     */
    public String toString() {
        String d =
            new String(this.getMilliseconds() 
                       + " ms  " +
                       this.getNanoseconds() + " ns" );
        return d;
    }
}
