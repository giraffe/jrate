// Object.h - Header file for java.lang.Object.  -*- c++ -*-

/* Copyright (C) 1998, 1999, 2000, 2001  Free Software Foundation

   This file is part of libgcj.

This software is copyrighted work licensed under the terms of the
Libgcj License.  Please consult the file "LIBGCJ_LICENSE" for
details.  */

#ifndef __JAVA_LANG_OBJECT_H__
#define __JAVA_LANG_OBJECT_H__

#pragma interface

#include <gcj/javaprims.h>

extern "C" void _Jv_PhantomFieldWriteBarrier (jobject from, jobject to);
extern "C" void _Jv_FieldWriteBarrier       (jobject from, jobject to);
extern "C" void _Jv_StaticFieldWriteBarrier (jobject from, jobject to);
extern "C" void _Jv_LocalVarWriteBarrier    (jobject from, jobject to);
extern "C" void _Jv_OnMethodEnter ();
extern "C" void _Jv_OnMethodExit  ();
extern "C" void _Jv_OnSynchronizedMethodEnter (jobject obj);
extern "C" void _Jv_OnSynchronizedMethodExit (jobject obj);
extern "C" jobject _Jv_IncrementReferenceCount (jobject obj);

// This class is mainly here as a kludge to get G++ to allocate two
// extra entries in each vtable.
struct _JvObjectPrefix
{
protected:
  // New ABI Compatibility Dummy, #1 and 2.
  virtual void nacd_1 (void) {}; // This slot really contains the Class pointer.
  // For IA64, the GC descriptor goes into the second word of the nacd1 descr.
# ifndef __ia64__
    virtual void nacd_2 (void) {}; // Actually the GC bitmap marking descriptor.
# endif
};

extern "Java" {
  template <class T> class JArray;
}

class java::lang::Object : public _JvObjectPrefix
{
protected:
  virtual void finalize (void);
public:
  // Order must match order in Object.java.
  jclass getClass (void);
  virtual jint hashCode (void);
  void notify (void);
  void notifyAll (void);
  void wait (jlong timeout, jint nanos);
  virtual jboolean equals (jobject obj);
  Object (void);
  virtual jstring toString (void);
  void wait (void);
  void wait (jlong timeout);

  friend void _Jv_MonitorEnter (jobject obj);
  friend void _Jv_MonitorExit (jobject obj);
  friend void _Jv_InitializeSyncMutex (void);
  friend void _Jv_FinalizeObject (jobject obj);

  friend void _Jv_PhantomFieldWriteBarrier (jobject from, jobject to);
  friend void _Jv_FieldWriteBarrier       (jobject from, jobject to);
  friend void _Jv_StaticFieldWriteBarrier (jobject from, jobject to);
  friend void _Jv_LocalVarWriteBarrier    (jobject from, jobject to);
  friend void _Jv_OnMethodEnter ();
  friend void _Jv_OnMethodExit  ();
  friend void _Jv_OnSynchronizedMethodEnter (jobject obj);
  friend void _Jv_OnSynchronizedMethodExit (jobject obj);
  friend jobject _Jv_IncrementReferenceCount (jobject obj);
    
 template <typename MemoryArea> friend class ::jrate::binding::java::ObjectInitializer;
  friend class javax::realtime::MemoryArea;
  friend class javax::realtime::CTMemory;
  friend class javax::realtime::LTMemory;
  friend class javax::realtime::VTMemory;
  friend class javax::realtime::HeapMemory;
  friend class javax::realtime::ImmortalMemory;

#ifdef JV_MARKOBJ_DECL
  friend JV_MARKOBJ_DECL;
#endif
#ifdef JV_MARKARRAY_DECL
  friend JV_MARKARRAY_DECL;
#endif

  static java::lang::Class class$;
public:
    static ::java::lang::Object* __jRateAlloc(::java::lang::Object* o, ::java::lang::Class* c);
    static ::java::lang::Object* __jRateAlloc(::java::lang::Object* o, ::java::lang::Class* c, JArray< ::java::lang::Class*>* types, JArray< ::java::lang::Object*>* args);
    static ::java::lang::Object* __jRateAllocArray(::java::lang::Object* o, ::java::lang::Class* c, jint n);
    static ::java::lang::Object* __jRateRealloc(::java::lang::Object* from, ::java::lang::Object* to);

    ::java::lang::Object* __incRefCount();
    static ::java::lang::Object* __incRefCount(::java::lang::Object* obj);
    static void __decRefCount(::java::lang::Object* obj);

    static jboolean __returnValue(jboolean v);
    static jchar __returnValue(jchar ch);
    static jbyte __returnValue(jbyte ch);
    static jshort __returnValue(jshort i);
    static jint __returnValue(jint i);
    static jlong __returnValue(jlong l);
    static jfloat __returnValue(jfloat f);
    static jdouble __returnValue(jdouble d); 
    static ::java::lang::Object* __returnValue(::java::lang::Object* o);

    static jboolean __passValue(jboolean v);
    static jbyte __passValue(jbyte b);
    static jshort __passValue(jshort i);
    static jchar __passValue(jchar ch);
    static jint __passValue(jint i);
    static jlong __passValue(jlong l);
    static jfloat __passValue(jfloat f);
    static jdouble __passValue(jdouble d);
    static ::java::lang::Object* __passValue(::java::lang::Object* o);

protected:
  virtual jobject clone (void);

private:
  jobject memory_area;
    
  // This does not actually refer to a Java object.  Instead it is a
  // placeholder for a piece of internal data (the synchronization
  // information).
    jobject sync_info;

public: // Actually package
    void sync_init (void);
};

#endif /* __JAVA_LANG_OBJECT_H__ */
