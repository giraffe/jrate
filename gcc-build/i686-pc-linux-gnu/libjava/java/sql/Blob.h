// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_sql_Blob__
#define __java_sql_Blob__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace sql
    {
      class Blob;
    }
  }
};

class ::java::sql::Blob : public ::java::lang::Object
{
public:
  virtual jlong length () = 0;
  virtual jbyteArray getBytes (jlong, jint) = 0;
  virtual ::java::io::InputStream *getBinaryStream () = 0;
  virtual jlong position (jbyteArray, jlong) = 0;
  virtual jlong position (::java::sql::Blob *, jlong) = 0;
  virtual jint setBytes (jlong, jbyteArray) = 0;
  virtual jint setBytes (jlong, jbyteArray, jint, jint) = 0;
  virtual ::java::io::OutputStream *setBinaryStream (jlong) = 0;
  virtual void truncate (jlong) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_sql_Blob__ */