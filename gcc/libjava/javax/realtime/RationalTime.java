// ************************************************************************
//    $Id: RationalTime.java 416 2004-02-22 18:35:45Z corsaro $
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
 * An object that represents a time interval millis/1E3+nanos/1E9
 * seconds long that is divided into subintervals by some frequency. 
 * This is generally used in periodic events, threads, and feasibility
 * analysis to specify periods where there is a basic period that must
 * be adhered to strictly (the interval), but within that interval the
 * periodic events aresupposed to happenfrequencytimes,asuniformly
 * spaced as possible,butclock and scheduling jitter is moderately
 * acceptable. If the value of any of the millisecond or nanosecond
 * fields is negative the variable is set to negative value. Although
 * logically this may represent time before the epoch, invalid results
 * may occur if an instance of AbsoluteTime representing time before
 * the epoch is given as a parameter to the a method.<br><br>
 *
 * <b>Caution:</b> This class is explicitly unsafe in multithreaded
 * situations when it is being changed. No synchronization is done. It
 * is assumed that users of this class who are mutating instances will
 * be doing their own synchronization at a higher level.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public class RationalTime extends RelativeTime {

    protected int frequency;
    
    /**
     * Construct a new Object of RationalTime Equivalent to new
     * Rational-Time( 1000, 0, frequency)---essentially a
     * cycles-per-second value.
     *
     * @param frequency the frequency value of this RationalTime.
     */
    public RationalTime(int frequency) {
        this(1000, 0, frequency);
    }
    
    /**
     * Construct a new Object of RationalTime. All arguments must be >= 0.
     *
     * @param frequency the frequency value of this RationalTime.
     * @param millis the milli seconds value of this RationalTime.
     * @param nanos the nano seconds value of this RationalTime.
     */
    public RationalTime(int frequency, long millis, int nanos) throws IllegalArgumentException {
        if (frequency > 0 && millis >= 0 && nanos >= 0) {
            this.set(millis, nanos);
            this.frequency = frequency;
        }
        else
            throw new IllegalArgumentException("The arguments should be all non-negative");
    }

    /**
     * Construct a new Object of RationalTime from the given RelativeTime.
     *
     * @param frequency the frequency value of this RationalTime.
     * @param interval the interval that defines this RationalTime.
     * @exception IllegalArgumentException if an error occurs
     */
    public RationalTime(int frequency, RelativeTime interval) throws IllegalArgumentException {
        this(frequency, interval.getMilliseconds(), interval.getNanoseconds());
    }

    /**
     * Add thistime to an AbsoluteTime. It is almost the same
     * dest.add(this, dest) except that it accounts for(ie. divides
     * by) the frequency.
     *
     * @param destination the AbsoluteTime that will be augmented with
     * the interarrival-time associated to this RationalTime.
     */
    public void addInterarrivalTo(AbsoluteTime destination) {
        destination.add(this.getInterarrivalTime(), destination);
    }
    
    /**
     * Gets the frequency associated with this.
     *
     * @return Return the frequency of this.
     */
    public int getFrequency() {
        return this.frequency;
    }


    /**
     * Gets the time duration between two consecutive ticks using frequency.
     *
     * @return the interarrival-time
     */
    public RelativeTime getInterarrivalTime() {
        RelativeTime destination = new RelativeTime(millis, nanos);
        this.getInterarrivalTime(destination);
        return destination;
    }

    /**
     * Gets the time duration between two consecutive ticks using frequency.
     *
     * @param destination the destination for the interarrival-time
     */
    public void getInterarrivalTime( RelativeTime destination) {
        // Compute the duration of the interarrival-time in usec
        double tmpusec = ((double)this.getNanoseconds()) / 1000;
        double usec = ((double)(this.getMilliseconds() * 1000) + tmpusec) / this.frequency;
        long millis = (long)(usec / 1000);
        int nanos = (int)((usec - (millis * 1000))) * 1000;
        
        destination.set(millis, nanos);
    }


    /**
     * Change the indicated interval of this to the sum of the values
     * of the arguments.
     *
     * @param millis the millisecond component.
     * @param nanos the nanosecond component.
     * @exception IllegalArgumentException if any of the argument is negative.
     */
    public void set(long millis, int nanos) throws IllegalArgumentException {
        if (millis >= 0 && nanos >= 0) {
            super.set(millis, nanos);
        }
        else
            throw new IllegalArgumentException("The arguments should be all non-negative");
    }


    /**
     * Set the frequency of this.
     *
     * @param frequency the frequency value.
     * @exception ArithmeticException if the frequency is not positive.
     */
    public void setFrequency(int frequency) throws ArithmeticException {
        if (frequency > 0)
            this.frequency = frequency;
        else throw new ArithmeticException("The frequency must be positive");
    }
}
