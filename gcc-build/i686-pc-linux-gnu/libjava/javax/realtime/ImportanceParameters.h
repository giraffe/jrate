// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_realtime_ImportanceParameters__
#define __javax_realtime_ImportanceParameters__

#pragma interface

#include <javax/realtime/PriorityParameters.h>

extern "Java"
{
  namespace javax
  {
    namespace realtime
    {
      class ImportanceParameters;
    }
  }
};

class ::javax::realtime::ImportanceParameters : public ::javax::realtime::PriorityParameters
{
public:
  ImportanceParameters (jint, jint);
  virtual jint getImportance () { return importance; }
  virtual void setImportance (jint);
  virtual ::java::lang::String *toString ();
public:  // actually protected
  jint __attribute__((aligned(__alignof__( ::javax::realtime::PriorityParameters ))))  importance;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_realtime_ImportanceParameters__ */
