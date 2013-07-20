// ************************************************************************
//    $Id: IMemoryArea.h 527 2005-04-01 21:28:33Z mdeters $
// ************************************************************************
//
//                                jRate
//
//               Copyright (C) 2001-2004 by Angelo Corsaro.
//                         <corsaro@cse.wustl.edu>
//                          All Rights Reserved.
//
//   Permission to use, copy, modify, and distribute this software and
//   its  documentation for any purpose is hereby  granted without fee,
//   provided that the above copyright notice appear in all copies and
//   that both that copyright notice and this permission notice appear
//   in  supporting  documentation. I don't make  any  representations
//   about the  suitability  of this  software for any  purpose. It is
//   provided "as is" without express or implied warranty.
//
//
// *************************************************************************
//
// *************************************************************************
#ifndef _JRATE_MEM_IMEMORY_AREA_H_
#define _JRATE_MEM_IMEMORY_AREA_H_

#include <jrate/synch/AtomicCounter.h>
#include <stdio.h>

namespace jrate { namespace mem {

template <typename PtrType,
          typename Klass,
          typename ReferenceChecker,
          typename PeerType>
    class IMemoryArea;

/**
 * Common RTSJ memory types:
 *  HeapMemory                    0x0051 (decimal 81)
 *  ImmortalMemory                0x0051 (decimal 81)
 *  ScopedMemory                  0x002a (decimal 42)
 *
 * jRate special types:
 *  MethodAreaMemory              0x0051 (decimal 81)
 */
enum {
    PRIMORDIAL_MEMORY           = 0x0001, /* primordial areas (heap, immortal, ...) */
    SCOPED_MEMORY               = 0x0002, /* RTSJ scoped areas */
    ARENA_MEMORY                = 0x0004, /* jRate extension: ??? */
    SINGLE_PARENT_MEMORY        = 0x0008, /* area must abide by single-parent rule */
    MULTIPLE_PARENT_MEMORY      = 0x0010, /* area may have multiple parents on scope stack */
    CHECKED_REFERENCE_MEMORY    = 0x0020, /* references to this area need runtime check */
    SAFE_REFERENCE_MEMORY       = 0x0040  /* references to this area are always safe */
};


/**
 * This class provides the interface for the different types of memory
 * areas.
 */
template <typename PtrType,
          typename Klass,
          typename ReferenceChecker,
          typename PeerType>
class IMemoryArea {
public:
    typedef PtrType ptr_t;
    typedef Klass klass_t;

public:
    IMemoryArea() : parent_(0), portal_(0) { }

    virtual ~IMemoryArea() { }

protected:
    /**
     * This method needs to be called by subclasses since if the field
     * would be initialized here any virtual method call would fail.
     */
    void init() {
        refChecker_.init(this);
    }

public:
    /**
     * Allocate a finalizable object.
     *
     * @param size the size of the object to allocate
     * @param klass the  class of the object to allocate
     */
    virtual PtrType allocateObject(size_t size, Klass* klass) = 0;

    /**
     * Allocates a non-finalizable Object i.e. and object for which the
     * finalizer should not be ran upon reclamation.
     *
     * @param size the size of the object to allocate
     * @param klass the  class of the object to allocate
     */
    virtual PtrType allocateObjectNoFinalizer(size_t size, Klass* klass) = 0;

    /**
     * Allocate an object which is guaranteed to be pointer-free. This
     * means that this object does not influence the reachibility of
     * any object. This information is useful for GC.
     *
     * @param size the size of the object to allocate
     * @param klass the class of the object to allocate
     */
    virtual PtrType allocatePtrFreeObject(size_t size, Klass* klass) = 0;


    /**
     * Allocate an object which is guaranteed to be pointer-free, and
     * which does not need finalization. This measn that this object
     * does not influence the reachibility of any object. This
     * information is useful for GC.
     *
     * @param size the size of the object to allocate
     * @param klass the class of the object to allocate
     */
    virtual PtrType allocatePtrFreeObjectNoFinalizer(size_t size, Klass* klass) = 0;

    /**
     * Allocates RawData, this is not guaranteed to be zeroed.
     *
     * @param size the size of the raw data object.
     */
    virtual PtrType allocateRawData(size_t size) = 0;

    /**
     * Allocates a chunk of bytes. The memory provided is guaranteed to
     * be zeored. For this type of memory no finalizer is invoked.
     *
     * @param size the size of the chunk of memory to be allocated.
     */
    virtual PtrType allocateBytes(size_t size) = 0;

public:
    /**
     * Release the storage area associated with the object passed to
     * this method. <b>NOTE:</b> Not all memory support individual
     * object release.
     *
     * @param ptr the pointer to the memory chunk that has to be
     * released.
     */
    virtual void release(void* ptr) = 0;

public:
    /**
     * Recalims all the objects allocated. Since this is a stack
     * allocator, once this method is called, all the contents is wiped
     * off, and the allocator is completely freed.
     */
    virtual void garbageCollect() = 0;

    /**
     * Returns the used memory.
     */
    virtual size_t usedMemory() = 0;

    /**
     * Returns the available memory.
     */
    virtual size_t availableMemory() = 0;

    /**
     * Total memory associated with this allocator.
     */
    virtual size_t totalMemory() = 0;

public:
    /**
     * Returns an ID that represents the type of the given memory
     * area.
     */
    virtual size_t typeID() = 0;

public:

    /**
     * Checks whether it is legal to create reference from the given
     * memory area to *this* memory area.
     */
    inline bool checkReferenceFrom(IMemoryArea* from) {
        return (from != 0)
            ? refChecker_.checkReference(from->refChecker_)
            : refChecker_.checkReference();

    }

    inline void incRefCount() {
        ++referenceCount_;
    }

    inline void decRefCount() {
        if (referenceCount_.decAndTest()) {
            this->garbageCollect();
            refChecker_.invalidate();
            portal_ = 0;
            parent_ = 0;
        }
    }

    /**
     * Gets the reference count associated with this memory area.
     */
    inline int referenceCount() {
        return referenceCount_.count();
    }

public:

    /**
     * Returns a reference to the portal object in this instance of
     * <code> ScopedMemory </code>
     *
     * @return A reference to the portal or <b>null</b> if there is no
     * portal set.
     */
    inline PtrType getPortal() { return portal_; }

    /**
     * Set the argument to the portal object in the memory area
     * represented by this instance of <code>ScopedMemory</code>. <p>
     * A portal can serve as a means of interthread communication and
     * they are used primarily when threads need to share an object
     * that is allocated in a <code>ScopedMemory</code>.
     *
     * @param obj The object which will become the portal for this. If
     * null the previous portal object remains the portal object for
     * this or if there was no previous portal object then there is
     * still no portal object for this.
     */
    inline void setPortal(PtrType obj) { portal_ = obj; }


public:
    /**
     * Sets the parent for the current memory area.
     */
    void setParent(IMemoryArea* parent) {
        parent_ = parent;
        refChecker_.validate(parent->refChecker_);
    }

    /**
     * Gets the parent for the current memory area.
     */
    inline IMemoryArea* getParent() const {
        return parent_;
    }

public:
    void setPeer(PeerType* peer) { peer_ = peer; }
    PeerType* getPeer() { return peer_; }

protected:
    IMemoryArea* parent_;
    ReferenceChecker refChecker_;
    jrate::synch::AtomicCounter referenceCount_;
    PeerType* peer_;
    PtrType portal_;
};

} /* jrate */ } /* mem */

#endif // _JRATE_MEM_IMEMORY_AREA_H_
