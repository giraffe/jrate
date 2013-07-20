// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_realtime_PeriodicParameters__
#define __javax_realtime_PeriodicParameters__

#pragma interface

#include <javax/realtime/ReleaseParameters.h>

extern "Java"
{
  namespace javax
  {
    namespace realtime
    {
      class PeriodicParameters;
      class Clock;
      class AsyncEventHandler;
      class RelativeTime;
      class HighResolutionTime;
    }
  }
};

class ::javax::realtime::PeriodicParameters : public ::javax::realtime::ReleaseParameters
{
public:
  PeriodicParameters (::javax::realtime::HighResolutionTime *, ::javax::realtime::RelativeTime *, ::javax::realtime::RelativeTime *, ::javax::realtime::RelativeTime *, ::javax::realtime::AsyncEventHandler *, ::javax::realtime::AsyncEventHandler *);
  virtual ::javax::realtime::RelativeTime *getPeriod () { return period; }
  virtual void setPeriod (::javax::realtime::RelativeTime *);
  virtual ::javax::realtime::HighResolutionTime *getStart () { return start; }
  virtual void setStart (::javax::realtime::HighResolutionTime *);
public: // actually package-private
  virtual ::javax::realtime::RelativeTime *getStart (::javax::realtime::Clock *);
public:
  virtual jboolean setIfFeasible (::javax::realtime::RelativeTime *, ::javax::realtime::RelativeTime *, ::javax::realtime::RelativeTime *);
public:  // actually protected
  ::javax::realtime::HighResolutionTime * __attribute__((aligned(__alignof__( ::javax::realtime::ReleaseParameters )))) start;
  ::javax::realtime::RelativeTime *period;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_realtime_PeriodicParameters__ */