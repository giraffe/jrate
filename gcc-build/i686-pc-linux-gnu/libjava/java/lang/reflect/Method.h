// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_lang_reflect_Method__
#define __java_lang_reflect_Method__

#pragma interface

#include <java/lang/reflect/AccessibleObject.h>
#include <gcj/array.h>

class ::java::lang::reflect::Method : public ::java::lang::reflect::AccessibleObject
{
public:
  jboolean equals (::java::lang::Object *);
  ::java::lang::Class *getDeclaringClass () { return declaringClass; }
  JArray< ::java::lang::Class *> *getExceptionTypes ();
  jint getModifiers ();
  ::java::lang::String *getName ();
private:
  void getType ();
public:
  JArray< ::java::lang::Class *> *getParameterTypes ();
  ::java::lang::Class *getReturnType ();
  jint hashCode ();
  ::java::lang::Object *invoke (::java::lang::Object *, JArray< ::java::lang::Object *> *);
public: // actually package-private
  static void appendClassName (::java::lang::StringBuffer *, ::java::lang::Class *);
public:
  ::java::lang::String *toString ();
private:
  Method ();
  ::java::lang::Class * __attribute__((aligned(__alignof__( ::java::lang::reflect::AccessibleObject )))) declaringClass;
  JArray< ::java::lang::Class *> *exception_types;
  ::java::lang::String *name;
  JArray< ::java::lang::Class *> *parameter_types;
  ::java::lang::Class *return_type;
  jint offset;
  friend jmethodID _Jv_FromReflectedMethod (java::lang::reflect::Method *);
  friend class java::lang::Class;
  friend class java::io::ObjectInputStream;
  friend jobject _Jv_JNI_ToReflectedMethod (_Jv_JNIEnv *, jclass, jmethodID, jboolean);
public:

  static ::java::lang::Class class$;
};

#endif /* __java_lang_reflect_Method__ */