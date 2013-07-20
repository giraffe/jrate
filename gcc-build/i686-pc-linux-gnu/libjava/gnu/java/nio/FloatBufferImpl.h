// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_nio_FloatBufferImpl__
#define __gnu_java_nio_FloatBufferImpl__

#pragma interface

#include <java/nio/FloatBuffer.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace nio
    {
      class ByteOrder;
      class FloatBuffer;
      class ByteBuffer;
    }
  }
  namespace gnu
  {
    namespace java
    {
      namespace nio
      {
        class FloatBufferImpl;
      }
    }
  }
};

class ::gnu::java::nio::FloatBufferImpl : public ::java::nio::FloatBuffer
{
public:
  FloatBufferImpl (jint, jint, jint);
  FloatBufferImpl (jfloatArray, jint, jint);
  FloatBufferImpl (::gnu::java::nio::FloatBufferImpl *);
private:
  static jfloatArray nio_cast (jbyteArray);
public: // actually package-private
  FloatBufferImpl (jbyteArray);
private:
  static jbyte nio_get_Byte (::gnu::java::nio::FloatBufferImpl *, jint, jint);
  static void nio_put_Byte (::gnu::java::nio::FloatBufferImpl *, jint, jint, jbyte);
public:
  ::java::nio::ByteBuffer *asByteBuffer ();
  jboolean isReadOnly () { return readOnly; }
  ::java::nio::FloatBuffer *slice ();
  ::java::nio::FloatBuffer *duplicate ();
  ::java::nio::FloatBuffer *asReadOnlyBuffer ();
  ::java::nio::FloatBuffer *compact () { return reinterpret_cast< ::java::nio::FloatBuffer *> (this); }
  jboolean isDirect ();
  jfloat get ();
  ::java::nio::FloatBuffer *put (jfloat);
  jfloat get (jint);
  ::java::nio::FloatBuffer *put (jint, jfloat);
  ::java::nio::ByteOrder *order ();
private:
  jboolean __attribute__((aligned(__alignof__( ::java::nio::FloatBuffer ))))  readOnly;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_nio_FloatBufferImpl__ */