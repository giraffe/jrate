// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_lang_ref_SoftReference__
#define __java_lang_ref_SoftReference__

#pragma interface

#include <java/lang/ref/Reference.h>

class ::java::lang::ref::SoftReference : public ::java::lang::ref::Reference
{
public:
  SoftReference (::java::lang::Object *);
  SoftReference (::java::lang::Object *, ::java::lang::ref::ReferenceQueue *);
  virtual ::java::lang::Object *get ();

  static ::java::lang::Class class$;
};

#endif /* __java_lang_ref_SoftReference__ */