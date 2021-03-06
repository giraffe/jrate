// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_realtime_jRateSystem__
#define __javax_realtime_jRateSystem__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace realtime
    {
      class jRateSystem;
      class MemoryArea;
    }
  }
};

class ::javax::realtime::jRateSystem : public ::java::lang::Object
{
public:
  static jint getThreadSchedulingPolicy ();
  static jint getRealtimeThreadSchedulingPolicy ();
  static ::javax::realtime::MemoryArea *getImmortalMemory ();
  static ::javax::realtime::MemoryArea *getHeap ();
  static ::javax::realtime::MemoryArea *getMethodArea ();
public: // actually package-private
  jRateSystem ();
private:
  static ::javax::realtime::MemoryArea *immortalMemory;
  static ::javax::realtime::MemoryArea *heap;
  static ::javax::realtime::MemoryArea *methodArea;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_realtime_jRateSystem__ */
