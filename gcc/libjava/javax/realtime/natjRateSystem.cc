#include <javax/realtime/jRateSystem.h>
#include <jrate/Config.h>

#include <jrate/jRate.h>
#include <java/lang/Class.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <javax/realtime/MemoryArea.h>
#include <jrate/binding/java/IMemoryArea.h>

using jrate::binding::java::IMemoryArea_t;

extern "C" {
  jobject _Jv_ScopeAwareNew(jobject o, jclass c, JArray<jclass>* types, JArray<jobject>* args) {
    /*if(!_scopeaware_empty_array) {
      // probably not thread safe, but can't do it above in definition
      _scopeaware_empty_array = _Jv_NewObjectArray(0, &java::lang::Class::class$, 0);
    }
    if(types == 0) {
      types = (JArray<jclass>*) JvNewObjectArray(0, &java::lang::Class::class$, 0);
    }
    if(args == 0) {
      args = JvNewObjectArray(0, &java::lang::Object::class$, 0);
    }
    */

    java::lang::reflect::Constructor* ctor = c->getDeclaredConstructor(types);
    return javax::realtime::MemoryArea::getMemoryArea(o)->unchecked_newInstance(ctor, args);
  }

  jobject _Jv_ScopeAwareNewArray(jobject o, jclass c, jint n) {
    return (jobject) javax::realtime::MemoryArea::getMemoryArea(o)->unchecked_newArray(c, n);
  }

  // This is generally dangerous and is only probably safe for immutable objects
  // like Strings.  It may or may not copy the object.  If it needs to copy, it
  // only works if the 'to' object's class has a constructor takeing an instance of
  // itself as an argument.
  jobject _Jv_ScopeAwareRealloc(jobject from, jobject to) {
    if(to == 0)
      return 0;

    // don't reallocate if not necessary
    javax::realtime::MemoryArea *toMA = javax::realtime::MemoryArea::getMemoryArea(to);
    javax::realtime::MemoryArea *fromMA = javax::realtime::MemoryArea::getMemoryArea(from);

    IMemoryArea_t *toIMA = MEM_AREA(toMA);
    IMemoryArea_t *fromIMA = MEM_AREA(fromMA);

    if(toIMA->checkReferenceFrom(fromIMA))
      return to;

    jclass klass = to->getClass();

    if(klass->isArray()) {
      jclass cklass = klass->getComponentType();
      jsize n = JvGetArrayLength((__JArray*)to);
      if(cklass->isPrimitive()) {
        jobject newArr = _Jv_NewPrimArray(cklass, n);
        java::lang::System::arraycopy(to, 0, newArr, 0, n);
        return newArr;
      } else { /* array of objects */
        JArray<jobject> *newArr = JvNewObjectArray(n, cklass, 0);
        jobject *oldElts = elements((JArray<jobject>*)to);
        jobject *newElts = elements(newArr);
        for(unsigned i = 0; i < n; ++i)
          newElts[i] = _Jv_ScopeAwareRealloc(newArr, oldElts[i]);
        return newArr;
      }
    }

    // scope-aware call to construct a new object of to's class with `to' as the
    // argument to the ctor
    JArray<jclass> *types = (JArray<jclass>*) JvNewObjectArray(1, &java::lang::Class::class$, klass);
    JArray<jobject> *args = JvNewObjectArray(1, &java::lang::Object::class$, to);
    java::lang::reflect::Constructor* ctor = klass->getDeclaredConstructor(types);

    return fromMA->unchecked_newInstance(ctor, args);
  }
}

jint
javax::realtime::jRateSystem::getThreadSchedulingPolicy() {
  return JRATE_THREAD_SCHED_POLICY;
}


jint
javax::realtime::jRateSystem::getRealtimeThreadSchedulingPolicy() {
  return JRATE_REAL_TIME_THREAD_SCHED_POLICY;
}
