// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_realtime_OneShotTimerServer__
#define __javax_realtime_OneShotTimerServer__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace realtime
    {
      class OneShotTimerServer;
      class OneShotTimer;
    }
  }
};

class ::javax::realtime::OneShotTimerServer : public ::java::lang::Object
{
public:
  virtual void registerTimer (::javax::realtime::OneShotTimer *) = 0;
  virtual void unregisterTimer (::javax::realtime::OneShotTimer *) = 0;
  virtual void schedule (::javax::realtime::OneShotTimer *) = 0;
  virtual void deschedule (::javax::realtime::OneShotTimer *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_realtime_OneShotTimerServer__ */
