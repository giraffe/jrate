// ************************************************************************
//    $Id: Schedulable.java 416 2004-02-22 18:35:45Z corsaro $
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
 * Handlers and other objects can be run by a Scheduler if they
 * provide a run() method and the methods defined below. The
 * Scheduler uses this information to create a suitable context to
 * execute the run() method.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public interface Schedulable extends Runnable {

    /**
     * Add to the feasibility of the associated scheduler if the
     * resulting feasibility is schedulable. If successful return
     * true, if not return false. If there is not assigned scheduler
     * false is returned.
     *
     * @return true if the resulting scheduler is feasible.
     */
    boolean addIfFeasible();
    
    /**
     * Inform the scheduler and cooperating facilities that the
     * resource demands (as expressed in the associated instances of
     * SchedulingParameters, ReleaseParameters,
     * MemoryParameters, and ProcessingGroupParameters) of this
     * instance of Schedulable will be considered in the feasibility
     * analysis of the associated Scheduler until further notice. 
     * Whether the resulting system is feasible or not, the addition
     * is completed.
     *
     * @return true If the resulting system is feasible.
     */
    boolean addToFeasibility();


    /**
     * Get the {@link MemoryParameters} of this schedulable object.
     *
     * @return a  <code>MemoryParameters</code> value.
     */
    MemoryParameters getMemoryParameters();


    /**
     * Set the {@link MemoryParameters} for this schedulable object.
     *
     * @param memoryParam the <code>MemoryParameters</code> for this
     * schedulable object.
     */
    void setMemoryParameters(MemoryParameters memoryParam);


    /**
     * Set the {@link MemoryParameters} for this schedulable object.
     *
     * @param memoryParam the <code>MemoryParameters</code> for this
     * schedulable object.
     * @return true if the requested change keeps the system feasible.
     */
    boolean setMemoryParametersIfFeasible(MemoryParameters memoryParam);

    
    /**
     * Get the {@link ProcessingGroupParameters} of this
     * schedulable object.
     *
     * @return a <code>ProcessingGroupParameters</code> value
     */
    ProcessingGroupParameters getProcessingGroupParameters();


    /**
     * Set the {@link ProcessingGroupParameters} for this schedulable object.
     *
     * @param groupParam a  <code>ProcessingGroupParameters</code> value
     */
    void setProcessingGroupParameters(ProcessingGroupParameters groupParam);


    /**
     * Set the {@link ProcessingGroupParameters} of this schedulable object
     * only if the resulting task set is feasible.
     *
     * @param groupParam a <code>ProcessingGroupParameters</code> value
     * @return Returns true if, after considering the values of the
     * parameters, the task set would still be feasible. In this case
     * the values of the parameters are changed. Returns false if,
     * after considering the values of the parameters, the task set
     * would not be feasible. In this case the values of the
     * parameters are not changed.
     */
    boolean setProcessingGroupParametersIfFeasible(ProcessingGroupParameters groupParam);


    /**
     * Get the {@link ReleaseParameters} of this schedulable object.
     *
     * @return a <code>ReleaseParameters</code> value
     */
    ReleaseParameters getReleaseParameters();


    /**
     * Set the {@link ReleaseParameters} for this schedulable object.
     *
     * @param releaseParam a <code>ReleaseParameters</code> value
     */
    void setReleaseParameters(ReleaseParameters releaseParam);


    /**
     * Set the {@link ReleaseParameters} for this schedulable object only if
     * the resulting task set is feasible.
     *
     * @param releaseParam a <code>ReleaseParameters</code> value
     */
    boolean setReleaseParametersIfFeasible(ReleaseParameters releaseParam);
    
    /**
     * Get the {@link Scheduler} for this schedulable object.
     *
     * @return a <code>Scheduler</code> value
     */
    Scheduler getScheduler();


    /**
     * Set the {@link Scheduler} for this schedulable object.
     *
     * @param scheduler the scheduler.
     * @exception IllegalThreadStateException 
     */
    void setScheduler(Scheduler scheduler) throws IllegalThreadStateException;

    /**
     * Set the {@link Scheduler} for this schedulable object. 
     *
     * @param scheduler a <code>Scheduler</code> value
     * @param schedParam a <code>SchedulingParameters</code> value
     * @param releaseParam a <code>ReleaseParameters</code> value
     * @param memoryParam a <code>MemoryParameters</code> value
     * @param groupParam a <code>ProcessingGroupParameters</code> value
     * @exception IllegalThreadStateException if an error occurs
     */
    void setScheduler(Scheduler scheduler,
                      SchedulingParameters schedParam,
                      ReleaseParameters releaseParam,
                      MemoryParameters memoryParam,
                      ProcessingGroupParameters groupParam)
        throws IllegalThreadStateException;
    
    /**
     * Get the {@link SchedulingParameters} for this schedulable object.
     *
     * @return a <code>SchedulingParameters</code> value
     */
    SchedulingParameters getSchedulingParameters();


    /**
     * Set the {@link SchedulingParameters} for this schedulable
     * object only if the resulting task set is feasible.
     *
     * @param schedParam a <code>SchedulingParameters</code> value
     */
    void setSchedulingParameters(SchedulingParameters schedParam);


    /**
     * Set the {@link SchedulingParameters} for this schedulable object.
     *
     * @param schedParam a <code>SchedulingParameters</code> value
     * @return true if the change was feasible, false otherwise.
     */
    boolean setSchedulingParametersIfFeasible(SchedulingParameters schedParam);

    
    /**
     * Inform the scheduler and cooperating facilities that the
     * resource demands, as expressed in the associated instances of
     * {@link SchedulingParameters}, {@link ReleaseParameters}, {@link
     * MemoryParameters}, and {@link ProcessingGroupParameters}, of
     * this instance of {@link Schedulable} should no longer be
     * considered in the feasibility analysis of the associated {@link
     * Scheduler}. Whether the resulting system is feasible or not,
     * the subtrac-tion is completed.
     *
     * @return true If the resulting system is feasible.
     */
    boolean removeFromFeasibility();


    
    
    /**
     * <b>NOTE:</b> This method is not part of the RTSJ Specification. 
     * It is used internally by this RTSJ implementation. 
     *
     * @return an <code>int</code> value used internally to represent
     * a total ordering of the schedulable entities.
     */
    int executionEligibility();

}
