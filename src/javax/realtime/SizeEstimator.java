// ************************************************************************
//    $Id: SizeEstimator.java 416 2004-02-22 18:35:45Z corsaro $
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
 * This is a convenient class to help people figure out how much
 * memory they need. Instead of passing actual numbers to the {@link
 * MemoryArea} constructors, one can pass <code>SizeEstimator</code>
 * objects with which you can have a better feel of how big a memory
 * area you require.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public final class SizeEstimator {

   protected long estimate;
   protected int allocationNumber = 0;

   /**
    * Returns an estimate of the number of bytes needed to store all
    * the objects reserved.
    *
    * @return the estimate.
    */
   public long getEstimate() {
      return this.estimate;
   }

   /**
    * Take into account additional n instances of <code>Class
    * c</code> when estimating the size of the {@link MemoryArea}.
    *
    * @param c the class to be considered
    * @param n the number of instances for which memory needs to be
    * reserved.
    */
   public void reserve(Class c, int n) {
      this.estimate += n * this.sizeOf(c);
      this.allocationNumber += n;
   }

   
   /**
    * Take into account one additional  instance of <code>Class
    * c</code> when estimating the size of the {@link MemoryArea}.
    *
    * @param c the class to be considered
    */
   public void reserve(Class c) {
      this.reserve(c, 1); 
   }
    
   /**
    * Take into account an additional instance of <code>SizeEstimator s</code>
    * when estimating the size of the {@link MemoryArea}.
    *
    * @param s a <code>SizeEstimator</code>
    */
   public void reserve(SizeEstimator s) {
      this.estimate += s.getEstimate();
      this.allocationNumber = s.getAllocationNumber();
   }

   /**
    * Take into account additional <code>n</code> instances of
    * <code>SizeEstimator s</code> when estimating the size of the
    * {@link MemoryArea}.
    *
    * @param s a <code>SizeEstimator</code> value
    * @param n the number of instances.
    */
   public void reserve(SizeEstimator s, int n) {
      this.estimate += n * s.getEstimate();
   }

   public int getAllocationNumber() { return this.allocationNumber; }

   // -- Native Methods --

   private native static long sizeOf(Class klass);
}
