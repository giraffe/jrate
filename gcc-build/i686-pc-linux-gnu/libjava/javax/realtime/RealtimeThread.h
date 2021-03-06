// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_realtime_RealtimeThread__
#define __javax_realtime_RealtimeThread__

#pragma interface

#include <java/lang/Thread.h>

extern "Java"
{
  namespace gnu
  {
    namespace gcj
    {
      class RawData;
    }
  }
  namespace javax
  {
    namespace realtime
    {
      class AbsoluteTime;
      class RelativeTime;
      class HighResolutionTime;
      class Clock;
      class RealtimeThread;
      class MemoryArea;
      class ExecutionEligibilityParameters;
      namespace util
      {
        class EventVariable;
      }
      class AsyncEventHandler;
      class Scheduler;
      class ProcessingGroupParameters;
      class MemoryParameters;
      class ReleaseParameters;
      class SchedulingParameters;
    }
  }
};

class ::javax::realtime::RealtimeThread : public ::java::lang::Thread
{
public:
  RealtimeThread ();
  RealtimeThread (::javax::realtime::SchedulingParameters *);
  RealtimeThread (::javax::realtime::SchedulingParameters *, ::javax::realtime::ReleaseParameters *);
  RealtimeThread (::javax::realtime::SchedulingParameters *, ::javax::realtime::ReleaseParameters *, ::javax::realtime::MemoryParameters *, ::javax::realtime::MemoryArea *, ::javax::realtime::ProcessingGroupParameters *, ::java::lang::Runnable *);
  RealtimeThread (::java::lang::Runnable *);
  static ::javax::realtime::RealtimeThread *currentRealtimeThread ();
  virtual jboolean addIfFeasible ();
  virtual jboolean setIfFeasible (::javax::realtime::ReleaseParameters *, ::javax::realtime::MemoryParameters *);
  virtual jboolean setIfFeasible (::javax::realtime::ReleaseParameters *, ::javax::realtime::MemoryParameters *, ::javax::realtime::ProcessingGroupParameters *);
  virtual jboolean setIfFeasible (::javax::realtime::ReleaseParameters *, ::javax::realtime::ProcessingGroupParameters *);
  virtual void schedulePeriodic ();
  virtual void deschedulePeriodic () { }
  static ::javax::realtime::MemoryArea *getCurrentMemoryArea ();
  static jint getInitialMemoryAreaIndex ();
  static jint getMemoryAreaStackDepth ();
  static ::javax::realtime::MemoryArea *getOuterMemoryArea (jint);
  virtual void interrupt ();
  virtual jboolean addToFeasibility ();
  virtual ::javax::realtime::MemoryParameters *getMemoryParameters () { return memoryParam; }
  virtual void setMemoryParameters (::javax::realtime::MemoryParameters *);
  virtual jboolean setMemoryParametersIfFeasible (::javax::realtime::MemoryParameters *);
  virtual ::javax::realtime::ProcessingGroupParameters *getProcessingGroupParameters () { return groupParam; }
  virtual void setProcessingGroupParameters (::javax::realtime::ProcessingGroupParameters *);
  virtual jboolean setProcessingGroupParametersIfFeasible (::javax::realtime::ProcessingGroupParameters *);
  virtual ::javax::realtime::ReleaseParameters *getReleaseParameters () { return releaseParam; }
  virtual void setReleaseParameters (::javax::realtime::ReleaseParameters *);
  virtual jboolean setReleaseParametersIfFeasible (::javax::realtime::ReleaseParameters *);
  virtual ::javax::realtime::Scheduler *getScheduler () { return scheduler; }
  virtual void setScheduler (::javax::realtime::Scheduler *);
  virtual void setScheduler (::javax::realtime::Scheduler *, ::javax::realtime::SchedulingParameters *, ::javax::realtime::ReleaseParameters *, ::javax::realtime::MemoryParameters *, ::javax::realtime::ProcessingGroupParameters *);
  virtual ::javax::realtime::SchedulingParameters *getSchedulingParameters () { return schedulingParam; }
  virtual void setSchedulingParameters (::javax::realtime::SchedulingParameters *);
  virtual jboolean setSchedulingParametersIfFeasible (::javax::realtime::SchedulingParameters *);
  virtual jboolean removeFromFeasibility ();
  static void sleep (::javax::realtime::Clock *, ::javax::realtime::HighResolutionTime *);
  static void sleep (::javax::realtime::Clock *, ::javax::realtime::RelativeTime *);
  static void sleep (::javax::realtime::Clock *, ::javax::realtime::AbsoluteTime *);
  static void sleep (::javax::realtime::RelativeTime *);
  static void sleep (::javax::realtime::AbsoluteTime *);
  static void sleep (::javax::realtime::HighResolutionTime *);
  virtual void start ();
  virtual void run ();
public:  // actually protected
  virtual void rtfini_ ();
public:
  virtual jboolean waitForNextPeriod ();
public: // actually package-private
  virtual jboolean waitForNextPeriod_ ();
private:
  ::javax::realtime::RelativeTime *getPeriod ();
public: // actually package-private
  virtual void setExecutionEligibilityParameters (::javax::realtime::ExecutionEligibilityParameters *);
  virtual ::javax::realtime::ExecutionEligibilityParameters *getExecutionEligibilityParameters () { return eligibilityParam; }
public:  // actually protected
  virtual jboolean validateSchedulingParameters ();
public: // actually package-private
  virtual jboolean pushMemoryArea (::javax::realtime::MemoryArea *);
  virtual ::javax::realtime::MemoryArea *popMemoryArea ();
  virtual jboolean executeInMemoryArea (::javax::realtime::MemoryArea *, ::java::lang::Runnable *);
public:
  virtual void setupTSS ();
  virtual ::javax::realtime::MemoryArea *getActiveMemoryArea ();
public:  // actually protected
  virtual ::javax::realtime::MemoryArea *getOuterMemoryArea_ (jint);
  virtual jint getInitialMemoryAreaIndex_ ();
public:
  virtual jint getMemoryAreaStackDepth_ ();
  virtual jint executionEligibility ();
public: // actually package-private
  virtual void initScopeStack (::gnu::gcj::RawData *);
  virtual void initScopeStack (::javax::realtime::MemoryArea *);
public:  // actually protected
  virtual jboolean setTopMemoryArea (::javax::realtime::MemoryArea *);
public: // actually package-private
  virtual void finiScopeStack ();
public:  // actually protected
  virtual ::gnu::gcj::RawData *getScopeStack () { return scopeStack; }
public:
  static void yield ();
public:  // actually protected
  virtual void setupTimeoutHandler ();
public: // actually package-private
  virtual jboolean isWaitingForNextPeriod () { return waitingForNextPeriod; }
  virtual void setWaitingForNextPeriod (jboolean);
  virtual void setDeadlineMiss (jboolean);
  virtual void setOverrun (jboolean);
  virtual void handleDeadlineMiss ();
  virtual void handleOverrun ();
public:  // actually protected
  virtual void updatePeriodicParameters ();
  ::javax::realtime::SchedulingParameters * __attribute__((aligned(__alignof__( ::java::lang::Thread )))) schedulingParam;
  ::javax::realtime::ReleaseParameters *releaseParam;
  ::javax::realtime::MemoryParameters *memoryParam;
  ::javax::realtime::ProcessingGroupParameters *groupParam;
  ::java::lang::Runnable *logic;
  ::javax::realtime::Scheduler *scheduler;
  jboolean hasStarted;
  ::gnu::gcj::RawData *scopeStack;
  jboolean isPeriodic;
  ::gnu::gcj::RawData *timeoutHandler_;
  ::gnu::gcj::RawData *pipeID_;
  ::javax::realtime::AsyncEventHandler *deadlineMissHandler;
  ::javax::realtime::AsyncEventHandler *overrunHandler;
  jboolean hasStartedTimer;
  jboolean periodExpired;
  jboolean hasMissedDeadline;
  jboolean hasOverrun;
  jboolean hasMissHandlers;
  jboolean hasOverrunHandlers;
  jboolean waitingForNextPeriod;
public: // actually package-private
  jboolean releaseParameterChanged;
public:  // actually protected
  ::javax::realtime::util::EventVariable *missCondition;
  ::javax::realtime::ExecutionEligibilityParameters *eligibilityParam;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_realtime_RealtimeThread__ */
