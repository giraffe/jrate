// ************************************************************************
//    $Id: MemoryArea.cc 474 2005-01-24 11:03:10Z mdeters $
// ************************************************************************

#include <jrate/jRate.h>
#include <jrate/binding/java/MemoryAreaScope.h>
#include <jrate/binding/java/IMemoryArea.h>

#include <javax/realtime/MemoryArea.h>
#include <javax/realtime/RealtimeThread.h>
#include <javax/realtime/MethodAreaMemory.h>
#include <javax/realtime/MemoryAccessError.h>
#include <javax/realtime/ThrowBoundaryError.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/Runnable.h>
#include <java/lang/Throwable.h>

// #include <jvm.h>
#include <gcj/cni.h>

javax::realtime::MemoryArea *
javax::realtime::MemoryArea::getMemoryArea(java::lang::Object * object)
{
    JRATE_LOG(("[jRate<MemoryArea::getMemoryArea>]"));
    return (object->memory_area != 0)
        ? (javax::realtime::MemoryArea *)object->memory_area
        : javax::realtime::MethodAreaMemory::instance();
}


::java::lang::Object*
javax::realtime::MemoryArea::newArray (::java::lang::Class *klass, jint size) {
    ::jrate::binding::java::IMemoryArea_t* ma = MEM_AREA(this);

    // must check legality to avoid a dangling pointer
    ::jrate::binding::java::IMemoryArea_t* curMA =
        ::jrate::sys::getTSS< ::jrate::sched::TSS< ::jrate::binding::java::IMemoryArea_t > >().get();
    if(!ma->checkReferenceFrom(curMA))
        throw new javax::realtime::MemoryAccessError();

    return unchecked_newArray(klass, size);
}

// We have unchecked versions for two reasons.  First, the check isn't necessary
// in the case of _Jv_ScopeAware...() calls because the existence of a pointer into
// a memory area should imply that that memory area is on the current thread's scope
// stack.  Second, the check can't be done when the current thread == null, which
// is the case on startup before the first thread object is allocated.

::java::lang::Object*
javax::realtime::MemoryArea::unchecked_newArray (::java::lang::Class *klass, jint size) {
    ::jrate::binding::java::IMemoryArea_t* ma = MEM_AREA(this);

    ::java::lang::Object* obj;
    {
        ::jrate::binding::java::MemoryAreaScope_t newScope(ma);
	if (klass->isPrimitive()) {
	  if (klass == JvPrimClass(char)) {
	    obj = JvNewCharArray(size);
	  }
	  else if (klass == JvPrimClass(boolean)) {
	    obj = JvNewBooleanArray(size);
	  }
	  else if (klass == JvPrimClass(float)) {
	    obj = JvNewFloatArray(size);
	  }
	  else if (klass == JvPrimClass(byte)) {
	    obj = JvNewByteArray(size);
	  }
	  else if (klass == JvPrimClass(short)) {
	    obj = JvNewShortArray(size);
	  }
	  else if (klass == JvPrimClass(int)) {
	    obj = JvNewIntArray(size);
	  }
	  else if (klass == JvPrimClass(long)) {
	    obj = JvNewLongArray(size);
	  }
	  else if (klass == JvPrimClass(double)) {
	    obj = JvNewDoubleArray(size);
	  }
	}
	else {
	  obj = JvNewObjectArray(size, klass, 0);
	}
    }
    return obj;
}

::java::lang::Object*
javax::realtime::MemoryArea::newInstance (::java::lang::Class* klass)
{
    ::jrate::binding::java::IMemoryArea_t* ma = MEM_AREA(this);

    // must check legality to avoid a dangling pointer
    ::jrate::binding::java::IMemoryArea_t* curMA =
        ::jrate::sys::getTSS< ::jrate::sched::TSS< ::jrate::binding::java::IMemoryArea_t > >().get();
    if(!ma->checkReferenceFrom(curMA))
        throw new javax::realtime::MemoryAccessError();

    return unchecked_newInstance(klass);
}

::java::lang::Object*
javax::realtime::MemoryArea::unchecked_newInstance (::java::lang::Class* klass)
{
    ::jrate::binding::java::IMemoryArea_t* ma = MEM_AREA(this);

    ::java::lang::Object* obj;
    {
        ::jrate::binding::java::MemoryAreaScope_t newScope(ma);
        obj = klass->newInstance();
    }
    return obj;
}

::java::lang::Object*
javax::realtime::MemoryArea::newInstance (::java::lang::reflect::Constructor* ctor,
                                          JArray< ::java::lang::Object *>* args)
{
    ::jrate::binding::java::IMemoryArea_t* ma = MEM_AREA(this);

    // must check legality to avoid a dangling pointer
    ::jrate::binding::java::IMemoryArea_t* curMA =
        ::jrate::sys::getTSS< ::jrate::sched::TSS< ::jrate::binding::java::IMemoryArea_t > >().get();
    if(!ma->checkReferenceFrom(curMA))
        throw new javax::realtime::MemoryAccessError();

    return unchecked_newInstance(ctor, args);
}

::java::lang::Object*
javax::realtime::MemoryArea::unchecked_newInstance (::java::lang::reflect::Constructor* ctor,
                                                    JArray< ::java::lang::Object *>* args)
{
    ::jrate::binding::java::IMemoryArea_t* ma = MEM_AREA(this);

    ::java::lang::Object* obj;
    {
        ::jrate::binding::java::MemoryAreaScope_t newScope(ma);
        obj = ctor->newInstance(args);
    }
    return obj;
}

void
javax::realtime::MemoryArea::guardedRun(java::lang::Runnable* logic)
{
    JRATE_LOG(("[jRate<MemoryArea::guardedRun>]"));
    try {
        logic->run();
    } catch(java::lang::Throwable* t) {
        /* So here's the four-part safety test:
         * 1. if t's memory area != this, then OK (rethrow)
         *    NOTE: This is safe because the only way the exception
         *    object can go out of scope here is if its allocated in
         *    *this* memory area.  If it's allocated in any other
         *    memory area, it will be accessible from our parent scope. */
        if (getMemoryArea(t) != this)
            throw t;
        /* 2. if this area is primordial, then OK (rethrow) */
        jrate::binding::java::IMemoryArea_t *ima = MEM_AREA(this);
        if (ima->typeID() & jrate::mem::SAFE_REFERENCE_MEMORY)
            throw t;
        /* 3. if our parent can refer to us, then we are twice on the
         *    scope stack---OK (rethrow)
         *    NOTE: This test is more general than needed for the RTSJ.
         *    It should function properly if a multiple-parent ScopedMemory
         *    extension is added to jRate.  It's basically a test to see
         *    if we're lower-down on the current scope stack (as well as
         *    being at the top). */
        jrate::binding::java::IMemoryArea_t *parent = ima->getParent();
        if (ima->checkReferenceFrom(parent))
            throw t;
        /* 4. otherwise, the exception is going out of scope; throw a
         *    ThrowBoundaryError instead.
         *    NOTE: The ThrowBoundaryError is allocated in the parent
         *    scope.  This leads to degraded performance (because if the
         *    ThrowBoundaryError propagates out of its scope, another
         *    ThrowBoundaryError will be created, etc...), but this
         *    approach avoids leaking immortal memory.  (Even if a single,
         *    global, immortal ThrowBoundaryError is used, the stack trace
         *    generated when its thrown will eat immortal memory.) */
        {
            jrate::binding::java::MemoryAreaScope_t newScope(parent);
            throw new javax::realtime::ThrowBoundaryError();
        }
    }
}
