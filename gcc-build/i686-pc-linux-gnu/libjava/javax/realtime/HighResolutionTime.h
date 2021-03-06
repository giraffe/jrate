// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_realtime_HighResolutionTime__
#define __javax_realtime_HighResolutionTime__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace realtime
    {
      class HighResolutionTime;
    }
  }
};

class ::javax::realtime::HighResolutionTime : public ::java::lang::Object
{
public:  // actually protected
  HighResolutionTime (jlong, jint);
public:
  virtual jint compareTo (::java::lang::Object *);
  virtual jint compareTo (::javax::realtime::HighResolutionTime *);
  virtual jboolean equals (::javax::realtime::HighResolutionTime *);
  virtual jboolean equals (::java::lang::Object *);
  jlong getMilliseconds () { return millis; }
  jint getNanoseconds () { return nanos; }
  virtual jint hashCode ();
private:
  jint hashCodeImpl ();
public:
  virtual void set (::javax::realtime::HighResolutionTime *);
  virtual void set (jlong);
  virtual void set (jlong, jint);
public: // actually package-private
  virtual void set_ (jlong, jint);
public:
  static void waitForObject (::java::lang::Object *, ::javax::realtime::HighResolutionTime *);
private:
  void adjustTimeRepresentation () { }
public:  // actually protected
  jlong __attribute__((aligned(__alignof__( ::java::lang::Object ))))  millis;
  jint nanos;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_realtime_HighResolutionTime__ */
