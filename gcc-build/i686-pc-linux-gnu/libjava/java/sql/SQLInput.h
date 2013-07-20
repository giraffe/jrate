// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_sql_SQLInput__
#define __java_sql_SQLInput__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace net
    {
      class URL;
    }
    namespace sql
    {
      class SQLInput;
      class Array;
      class Clob;
      class Blob;
      class Ref;
      class Timestamp;
      class Time;
      class Date;
    }
    namespace math
    {
      class BigDecimal;
    }
  }
};

class ::java::sql::SQLInput : public ::java::lang::Object
{
public:
  virtual ::java::lang::String *readString () = 0;
  virtual jboolean readBoolean () = 0;
  virtual jbyte readByte () = 0;
  virtual jshort readShort () = 0;
  virtual jint readInt () = 0;
  virtual jlong readLong () = 0;
  virtual jfloat readFloat () = 0;
  virtual jdouble readDouble () = 0;
  virtual ::java::math::BigDecimal *readBigDecimal () = 0;
  virtual jbyteArray readBytes () = 0;
  virtual ::java::sql::Date *readDate () = 0;
  virtual ::java::sql::Time *readTime () = 0;
  virtual ::java::sql::Timestamp *readTimestamp () = 0;
  virtual ::java::io::Reader *readCharacterStream () = 0;
  virtual ::java::io::InputStream *readAsciiStream () = 0;
  virtual ::java::io::InputStream *readBinaryStream () = 0;
  virtual ::java::lang::Object *readObject () = 0;
  virtual ::java::sql::Ref *readRef () = 0;
  virtual ::java::sql::Blob *readBlob () = 0;
  virtual ::java::sql::Clob *readClob () = 0;
  virtual ::java::sql::Array *readArray () = 0;
  virtual jboolean wasNull () = 0;
  virtual ::java::net::URL *readURL () = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_sql_SQLInput__ */