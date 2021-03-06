// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_realtime_PeriodicTimer__
#define __javax_realtime_PeriodicTimer__

#pragma interface

#include <javax/realtime/Timer.h>

extern "Java"
{
  namespace javax
  {
    namespace realtime
    {
      class PeriodicTimer;
      class TimerImpl;
      class AbsoluteTime;
      class Clock;
      class AsyncEventHandler;
      class RelativeTime;
      class PeriodicTimerImpl;
    }
  }
};

class ::javax::realtime::PeriodicTimer : public ::javax::realtime::Timer
{
public:
  PeriodicTimer (::javax::realtime::RelativeTime *, ::javax::realtime::RelativeTime *, ::javax::realtime::AsyncEventHandler *);
  PeriodicTimer (::javax::realtime::RelativeTime *, ::javax::realtime::RelativeTime *, ::javax::realtime::Clock *, ::javax::realtime::AsyncEventHandler *);
  PeriodicTimer (::javax::realtime::AbsoluteTime *, ::javax::realtime::RelativeTime *, ::javax::realtime::AsyncEventHandler *);
  PeriodicTimer (::javax::realtime::AbsoluteTime *, ::javax::realtime::RelativeTime *, ::javax::realtime::Clock *, ::javax::realtime::AsyncEventHandler *);
  virtual ::javax::realtime::RelativeTime *getInterval ();
  virtual void setInterval (::javax::realtime::RelativeTime *);
public:  // actually protected
  virtual ::javax::realtime::TimerImpl *getTimerImpl () { return reinterpret_cast< ::javax::realtime::TimerImpl *> (timerDelegate); }
private:
  ::javax::realtime::PeriodicTimerImpl * __attribute__((aligned(__alignof__( ::javax::realtime::Timer )))) timerDelegate;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_realtime_PeriodicTimer__ */
