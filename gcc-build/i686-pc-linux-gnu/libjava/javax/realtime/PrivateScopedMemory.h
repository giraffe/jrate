// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_realtime_PrivateScopedMemory__
#define __javax_realtime_PrivateScopedMemory__

#pragma interface

#include <javax/realtime/ScopedMemory.h>

extern "Java"
{
  namespace javax
  {
    namespace realtime
    {
      class PrivateScopedMemory;
      class HighResolutionTime;
      class SizeEstimator;
      class RealtimeThread;
    }
  }
};

class ::javax::realtime::PrivateScopedMemory : public ::javax::realtime::ScopedMemory
{
public:
  PrivateScopedMemory (jlong);
  PrivateScopedMemory (jlong, ::java::lang::Runnable *);
  PrivateScopedMemory (::javax::realtime::SizeEstimator *);
  PrivateScopedMemory (::javax::realtime::SizeEstimator *, ::java::lang::Runnable *);
  virtual void join ();
  virtual void join (::javax::realtime::HighResolutionTime *);
  virtual void joinAndEnter ();
  virtual void joinAndEnter (::javax::realtime::HighResolutionTime *);
  virtual void joinAndEnter (::java::lang::Runnable *);
  virtual void joinAndEnter (::java::lang::Runnable *, ::javax::realtime::HighResolutionTime *);
  virtual ::java::lang::String *toString ();
  virtual void enter (::java::lang::Runnable *);
public:  // actually protected
  virtual void setOwner ();
  virtual void resetOwner ();
  ::javax::realtime::RealtimeThread * __attribute__((aligned(__alignof__( ::javax::realtime::ScopedMemory )))) owner;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_realtime_PrivateScopedMemory__ */