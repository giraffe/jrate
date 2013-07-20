// ************************************************************************
//    $Id: HighResolutionTime.java 416 2004-02-22 18:35:45Z corsaro $
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
 * Used to express time with nanosecond accuracy. This class is never
 * used directly: it is abstract and has no public constructors. 
 * Instead, use one of its subclasses AbsoluteTime, RelativeTime, or
 * RationalTime. When an API is defined that has an HighResolutionTime
 * as a parameter, it can take either an absolute, relative, or
 * rational time and will do something appropriate. All of the
 * arithmetic functions come in both allocating and non-allocating
 * forms. The standard Java java.util.Date class uses milliseconds as
 * its basic unit in order to provide sufficient range for a wide
 * variety of applications. Real-time programming generally requires
 * nanosecond resolution, but even a 64 bit real-time clock based in
 * nanoseconds would be problematic in some situations, so a compound
 * format composed of 64 bits of millisecond timing, and 32 bits of
 * nanoseconds within a millisecond, was chosen.<br><br>
 *
 * <b>Caution:</b> This class is explicitly unsafe in multithreaded
 * situations when it is being changed. No synchronization is done. It
 * is assumed that users of this class who are mutating instances will
 * be doing their own synchronization at a higher level.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public abstract class HighResolutionTime implements Comparable {

    protected long millis;
    protected int nanos;

    protected HighResolutionTime(long millis, int nanos) {
        this.millis = millis;
        this.nanos = nanos;
        this.adjustTimeRepresentation();
    }

    /**
     * Compares this to another time object.
     *
     * @param time the time against which "this" time has to be
     * compared.
     * @return -1 if the time represented by this object is less than
     * the time represented by the object passed as arguemt, 0 if they
     * are the same, and 1 if "this time" is greater.
     */
    public int compareTo(Object time) {
        HighResolutionTime otherTime = (HighResolutionTime)time;
        return this.compareTo(otherTime);
    }


    /**
     * Compares this to another time object.
     *
     * @param time the time against which "this" time has to be
     * compared.
     * @return -1 if the time represented by this object is less than
     * the time represented by the object passed as arguemt, 0 if they
     * are the same, and 1 if "this time" is greater.
     */
    public int compareTo(HighResolutionTime  time) {
        if (this.millis > time.millis)
            return 1;
        else if (this.millis < time.millis)
            return -1;
        else if (nanos > time.nanos)
            return 1;
        else if (nanos < time.nanos)
            return -1;
        
        return 0;
    }

    /**
     * Determines whether this time equals a given other time.
     *
     * @param time the time value compared to this.
     * @return true if the time passes as argument and this time are the same
     */
    public boolean equals(HighResolutionTime time) {
        return (this.millis == time.millis && this.nanos == time.nanos);
    }


    /**
     * Determines whether this time equals a given other time.
     *
     * @param time the time value compared to this.
     * @return true if the time passes as argument and this time are the same
     */
    public boolean equals(Object time) {
        return this.equals((HighResolutionTime)time);
    }

    /**
     * Gets the milliseconds component associated with this
     * time.
     *
     * @return the milliseconds components
     */
    public final long getMilliseconds() {
        return this.millis;
    }

    /**
     * Gets the nanoseconds component associated with this
     * time.
     *
     * @return the nano components.
     */
    public final int getNanoseconds() {
        return this.nanos;
    }

    public int hashCode() {
        return this.hashCodeImpl();
    }

    
    private native int hashCodeImpl();
    
    /**
     * Changes the time represented by the argument to some time
     * between the invocation of the method and the return of the
     * method.
     *
     * @param time The HighResolutionTime which will be set to
     * represent the current time.
     */
    public void set(HighResolutionTime time) {
        this.millis = time.millis;
        this.nanos = time.nanos;
        this.adjustTimeRepresentation();
    }


    /**
     * Sets the millisecond component of this to the given argument.
     *
     * @param millis This value will be the value of the millisecond
     * component of this at the completion of the call. If millis is
     * negative the millisecond value of this is set to negative
     * value. Although logically this may represent time before the
     * epoch, invalid resultsmayoccur if a HighResolutionTime
     * representing time before the epoch is given as a parameter to
     * the methods.
     */
    public void set(long millis) {
        this.millis = millis;
    }
    

    /**
     * Sets the millisecond and nanosecond components of this.
     *
     * @param millis Value to set millisecond part of this. If millis
     * is negative the millisecond value of this is set to negative
     * value. Although logically this may represent time before the
     * epoch, invalid resultsmayoccur if a HighResolutionTime
     * representing time before the epoch is given as a parameter to
     * the methods.
     * @param nanos Value to set nanosecond part of this. If nanos is
     * negative the millisecond value of this is set to negative
     * value. Although logically this may represent time before the
     * epoch, invalid resultsmayoccur if a HighResolutionTime
     * representing time before the epoch is given as a parameter to
     * the methods.
     */
    public void set(long millis, int nanos) {
        this.millis = millis;
        this.nanos = nanos;
        this.adjustTimeRepresentation();
    }

    void set_(long millis, int nanos) {
        this.millis = millis;
        this.nanos = nanos;
    }
    
    /**
     * Behaves exactly like target.wait() but with the enhancement
     * that it waits with a precision of HighResolutionTime.<br><br>
     *
     * <b> Implementation Note: </b> This method, as it is, really
     * makes sense only if the time being passed is a RelativeTime
     * (otherwise a clock should have been provided. In the current
     * implementation, it throws a class cast exception if the time
     * being passed is not a RelativeTime.
     *
     * @param target The object on which to wait. The current thread
     * must have a lock on the object.
     * @param time The time for which to wait. If this is
     * RelativeTime(0,0) then wait indefinitely.
     * @exception InterruptedException If another threads interrupts
     * this thread while its waiting.
     *
     *  @deprecated Don't use this method!
     */
    public static void waitForObject(Object target, HighResolutionTime time)
        throws InterruptedException
    {
        RelativeTime relTime = (RelativeTime)time;
        synchronized(target) {
            long millis = relTime.getMilliseconds();
            int nanos = relTime.getNanoseconds();
            if (millis == 0 &&  nanos == 0)
                target.wait();
            else
                target.wait(millis, nanos);
        }
    }

    private final void adjustTimeRepresentation() {
        // No-op 
    }
}
