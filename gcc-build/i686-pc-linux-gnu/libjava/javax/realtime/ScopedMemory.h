// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_realtime_ScopedMemory__
#define __javax_realtime_ScopedMemory__

#pragma interface

#include <javax/realtime/MemoryArea.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace realtime
    {
      class ScopedMemory;
      class HighResolutionTime;
      class SizeEstimator;
    }
  }
};

class ::javax::realtime::ScopedMemory : public ::javax::realtime::MemoryArea
{
public:
  ScopedMemory (jlong);
  ScopedMemory (jlong, ::java::lang::Runnable *);
  ScopedMemory (::javax::realtime::SizeEstimator *);
  ScopedMemory (::javax::realtime::SizeEstimator *, ::java::lang::Runnable *);
  virtual jlong getMaximumSize () { return sizeInBytes; }
  virtual ::java::lang::Object *getPortal ();
  virtual void setPortal (::java::lang::Object *);
  virtual jint getReferenceCount ();
  virtual void join ();
  virtual void join (::javax::realtime::HighResolutionTime *);
  virtual void joinAndEnter ();
  virtual void joinAndEnter (::javax::realtime::HighResolutionTime *);
  virtual void joinAndEnter (::java::lang::Runnable *);
  virtual void joinAndEnter (::java::lang::Runnable *, ::javax::realtime::HighResolutionTime *);
  virtual ::java::lang::String *toString ();
  virtual void enter (::java::lang::Runnable *);
public:  // actually protected
  jcharArray __attribute__((aligned(__alignof__( ::javax::realtime::MemoryArea ))))  joinSynchronizer;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_realtime_ScopedMemory__ */