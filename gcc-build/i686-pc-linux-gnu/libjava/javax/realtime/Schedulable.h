// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_realtime_Schedulable__
#define __javax_realtime_Schedulable__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace realtime
    {
      class Schedulable;
      class SchedulingParameters;
      class Scheduler;
      class ReleaseParameters;
      class ProcessingGroupParameters;
      class MemoryParameters;
    }
  }
};

class ::javax::realtime::Schedulable : public ::java::lang::Object
{
public:
  virtual jboolean addIfFeasible () = 0;
  virtual jboolean addToFeasibility () = 0;
  virtual ::javax::realtime::MemoryParameters *getMemoryParameters () = 0;
  virtual void setMemoryParameters (::javax::realtime::MemoryParameters *) = 0;
  virtual jboolean setMemoryParametersIfFeasible (::javax::realtime::MemoryParameters *) = 0;
  virtual ::javax::realtime::ProcessingGroupParameters *getProcessingGroupParameters () = 0;
  virtual void setProcessingGroupParameters (::javax::realtime::ProcessingGroupParameters *) = 0;
  virtual jboolean setProcessingGroupParametersIfFeasible (::javax::realtime::ProcessingGroupParameters *) = 0;
  virtual ::javax::realtime::ReleaseParameters *getReleaseParameters () = 0;
  virtual void setReleaseParameters (::javax::realtime::ReleaseParameters *) = 0;
  virtual jboolean setReleaseParametersIfFeasible (::javax::realtime::ReleaseParameters *) = 0;
  virtual ::javax::realtime::Scheduler *getScheduler () = 0;
  virtual void setScheduler (::javax::realtime::Scheduler *) = 0;
  virtual void setScheduler (::javax::realtime::Scheduler *, ::javax::realtime::SchedulingParameters *, ::javax::realtime::ReleaseParameters *, ::javax::realtime::MemoryParameters *, ::javax::realtime::ProcessingGroupParameters *) = 0;
  virtual ::javax::realtime::SchedulingParameters *getSchedulingParameters () = 0;
  virtual void setSchedulingParameters (::javax::realtime::SchedulingParameters *) = 0;
  virtual jboolean setSchedulingParametersIfFeasible (::javax::realtime::SchedulingParameters *) = 0;
  virtual jboolean removeFromFeasibility () = 0;
  virtual jint executionEligibility () = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_realtime_Schedulable__ */
