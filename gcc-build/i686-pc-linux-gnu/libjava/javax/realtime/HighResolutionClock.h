// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_realtime_HighResolutionClock__
#define __javax_realtime_HighResolutionClock__

#pragma interface

#include <javax/realtime/Clock.h>

extern "Java"
{
  namespace javax
  {
    namespace realtime
    {
      class OneShotTimerImpl;
      class PeriodicTimerImpl;
      class OneShotTimer;
      class TimerImpl;
      class PeriodicTimer;
      class AbsoluteTime;
      class RelativeTime;
      class HighResolutionClock;
    }
  }
};

class ::javax::realtime::HighResolutionClock : public ::javax::realtime::Clock
{
public:
  HighResolutionClock ();
  static ::javax::realtime::HighResolutionClock *instance ();
  virtual ::javax::realtime::RelativeTime *getResolution ();
private:
  static ::javax::realtime::RelativeTime *getResolutionImpl ();
public:
  virtual void setResolution (::javax::realtime::RelativeTime *);
private:
  static void setResolutionImpl ();
public:
  virtual void getTime (::javax::realtime::AbsoluteTime *);
private:
  static void getTimeImpl (::javax::realtime::AbsoluteTime *);
public:
  virtual jlong getClockTickCount ();
private:
  static jlong getClockTickCountImpl ();
public:
  virtual ::javax::realtime::RelativeTime *clockTickToTime (jlong);
  virtual void clockTickToTime (jlong, ::javax::realtime::RelativeTime *);
public: // actually package-private
  virtual ::javax::realtime::TimerImpl *createPeriodicTimerImpl (::javax::realtime::PeriodicTimer *) { return 0; }
  virtual ::javax::realtime::TimerImpl *createOneShotTimerImpl (::javax::realtime::OneShotTimer *) { return 0; }
  virtual ::javax::realtime::PeriodicTimerImpl *createPeriodicTimerImpl (::javax::realtime::PeriodicTimer *, ::javax::realtime::RelativeTime *, ::javax::realtime::RelativeTime *) { return 0; }
  virtual ::javax::realtime::PeriodicTimerImpl *createPeriodicTimerImpl (::javax::realtime::PeriodicTimer *, ::javax::realtime::AbsoluteTime *, ::javax::realtime::RelativeTime *) { return 0; }
  virtual ::javax::realtime::OneShotTimerImpl *createOneShotTimerImpl (::javax::realtime::OneShotTimer *, ::javax::realtime::RelativeTime *) { return 0; }
  virtual ::javax::realtime::OneShotTimerImpl *createOneShotTimerImpl (::javax::realtime::OneShotTimer *, ::javax::realtime::AbsoluteTime *) { return 0; }
private:
  static ::javax::realtime::HighResolutionClock *theIntance;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_realtime_HighResolutionClock__ */