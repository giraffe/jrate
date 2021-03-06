// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_realtime_OneShotTimer__
#define __javax_realtime_OneShotTimer__

#pragma interface

#include <javax/realtime/Timer.h>

extern "Java"
{
  namespace javax
  {
    namespace realtime
    {
      class OneShotTimer;
      class TimerImpl;
      class RelativeTime;
      class Clock;
      class AsyncEventHandler;
      class AbsoluteTime;
      class OneShotTimerImpl;
    }
  }
};

class ::javax::realtime::OneShotTimer : public ::javax::realtime::Timer
{
public:
  OneShotTimer (::javax::realtime::AbsoluteTime *, ::javax::realtime::AsyncEventHandler *);
  OneShotTimer (::javax::realtime::AbsoluteTime *, ::javax::realtime::Clock *, ::javax::realtime::AsyncEventHandler *);
  OneShotTimer (::javax::realtime::RelativeTime *, ::javax::realtime::AsyncEventHandler *);
  OneShotTimer (::javax::realtime::RelativeTime *, ::javax::realtime::Clock *, ::javax::realtime::AsyncEventHandler *);
public:  // actually protected
  virtual ::javax::realtime::TimerImpl *getTimerImpl () { return reinterpret_cast< ::javax::realtime::TimerImpl *> (timerDelegate); }
private:
  ::javax::realtime::OneShotTimerImpl * __attribute__((aligned(__alignof__( ::javax::realtime::Timer )))) timerDelegate;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_realtime_OneShotTimer__ */
