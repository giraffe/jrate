// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_nio_PipeImpl__
#define __gnu_java_nio_PipeImpl__

#pragma interface

#include <java/nio/channels/Pipe.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace nio
      {
        class PipeImpl;
      }
    }
  }
  namespace java
  {
    namespace nio
    {
      namespace channels
      {
        class Pipe$SourceChannel;
        class Pipe$SinkChannel;
      }
    }
  }
};

class ::gnu::java::nio::PipeImpl : public ::java::nio::channels::Pipe
{
public:
  PipeImpl ();
  virtual ::java::nio::channels::Pipe$SinkChannel *sink () { return 0; }
  virtual ::java::nio::channels::Pipe$SourceChannel *source () { return 0; }

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_nio_PipeImpl__ */
