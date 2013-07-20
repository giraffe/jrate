// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_zip_CheckedOutputStream__
#define __java_util_zip_CheckedOutputStream__

#pragma interface

#include <java/io/FilterOutputStream.h>
#include <gcj/array.h>

class ::java::util::zip::CheckedOutputStream : public ::java::io::FilterOutputStream
{
public:
  CheckedOutputStream (::java::io::OutputStream *, ::java::util::zip::Checksum *);
  virtual ::java::util::zip::Checksum *getChecksum () { return sum; }
  virtual void write (jint);
  virtual void write (jbyteArray, jint, jint);
private:
  ::java::util::zip::Checksum * __attribute__((aligned(__alignof__( ::java::io::FilterOutputStream )))) sum;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_util_zip_CheckedOutputStream__ */