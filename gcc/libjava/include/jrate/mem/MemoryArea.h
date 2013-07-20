// ************************************************************************
//    $Id: MemoryArea.h 429 2004-09-15 20:32:02Z corsaro $
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
#ifndef _JRATE_MEM_MEMORY_AREA_H_
#define _JRATE_MEM_MEMORY_AREA_H_

#include <stdlib.h>

namespace jrate { namespace mem {

template <typename MemoryAreaBase,
          typename Allocator,
          typename BufferProvider,
          typename Synchronizer,
          typename PtrType,
          typename Klass,
          int      TYPE_ID>
    class MemoryArea;


/**
 * Provides a concrete and policy based implementation of the
 * <code> IMemoryArea </code> class.
 */
template <typename MemoryAreaBase,
          typename Allocator,
          typename BufferProvider,
          typename Synchronizer,
          typename PtrType,
          typename Klass,
          int      TYPE_ID>
class MemoryArea : public MemoryAreaBase {
public:

    /**
     * Creates an allocator that has a capacity of at least
     * <code>minSize</code> and at most <code>maxSize</code>, and uses
     * the provided buffer provider in order to allocated the storage
     * needed to provide allocation service.
     *
     * @param minSize the minumum allocator size
     * @param maxSize the maximim alocator size
     * @param bp      the byffer provider from with the buffer will
     *                be requested
     */
    MemoryArea(size_t minSize, size_t maxSize, BufferProvider& bp)
        : allocator_(minSize, maxSize, bp) { this->init(); }

    /**
     * Creates an allocator that has a capacity of at least
     * <code>minSize</code> and at most <code>maxSize</code>, and uses
     * the class  provided buffer provider.
     *
     * @param minSize the minumum allocator size
     * @param maxSize the maximim alocator size
     */
    MemoryArea(size_t minSize, size_t maxSize)
        : allocator_(minSize, maxSize) { this->init(); }

    /**
     * Creates an allocator that has a capacity of at least
     * <code>minSize</code> and at most <code>maxSize</code>, and uses
     * the provided buffer provider in order to allocated the storage
     * needed to provide allocation service.
     *
     * @param minSize      the minumum allocator size
     * @param maxSize      the maximim alocator size
     * @param bp           the byffer provider from with the buffer will
     *                     be requested
     * @param synchronizer the synchronizer object to be used in order
     *                     to make this allocator thread safe.
     */
    MemoryArea(size_t minSize, size_t maxSize,
               BufferProvider& bp, Synchronizer& synchronizer)
        : allocator_(minSize, maxSize, synchronizer) {  this->init(); }


    /**
     * Creates an allocator that has a capacity of at least
     * <code>minSize</code> and at most <code>maxSize</code>, and uses
     * a client provided synchronizer.
     *
     * @param minSize      the minumum allocator size
     * @param maxSize      the maximim alocator size
     * @param synchronizer the synchronizer object to be used in order
     *                     to make this allocator thread safe.
     */
    MemoryArea(size_t minSize, size_t maxSize,  Synchronizer& synchronizer)
        : allocator_(minSize, maxSize, synchronizer) { this->init(); }

    virtual ~MemoryArea() { }

public:
    /**
     * Sets the object initializer for this memory area.
     */
    inline void setObjectInitializer(const typename Allocator::ObjectInitializer_t& objInitializer) {
        allocator_.setObjectInitializer(objInitializer);
    }

public:
    /**
     * Allocate a finalizable object.
     *
     * @param size the size of the object to allocate
     * @param klass the  class of the object to allocate
     */
    virtual PtrType allocateObject(size_t size, Klass* klass) {
        return allocator_.allocateObject(size, klass);
    }

    /**
     * Allocates a non-finalizable Object i.e. and object for which the
     * finalizer should not be ran upon reclamation.
     *
     * @param size the size of the object to allocate
     * @param klass the  class of the object to allocate
     */
    virtual PtrType allocateObjectNoFinalizer(size_t size, Klass* klass) {
        return allocator_.allocateObjectNoFinalizer(size, klass);
    }

    /**
     * Allocate an object which is guaranteed to be pointer-free. This
     * measn that this object does not influence the reachibility of
     * any object. This information is useful for GC.
     *
     * @param size the size of the object to allocate
     * @param klass the  class of the object to allocate
     */
    virtual PtrType allocatePtrFreeObject(size_t size, Klass* klass) {
        return allocator_.allocatePtrFreeObject(size, klass);
    }


    /**
     * Allocate an object which is guaranteed to be pointer-free, and
     * which does not need finalization. This measn that this object
     * does not influence the reachibility of any object. This
     * information is useful for GC.
     *
     * @param size the size of the object to allocate
     * @param klass the  class of the object to allocate
     */
    virtual PtrType allocatePtrFreeObjectNoFinalizer(size_t size,
                                                     Klass* klass) {
        return allocator_.allocatePtrFreeObjectNoFinalizer(size, klass);
    }

    /**
     * Allocates RawData, this is not guaranteed to be zeroed.
     *
     * @param size the size of the raw data object.
     */
    virtual PtrType allocateRawData(size_t size) {
        return allocator_.allocateRawData(size);
    }

    /**
     * Allocates a chunk of bytes. The memory provided is guaranteed to
     * be zeored. For this type of memory no finalizer is invoked.
     *
     * @param size the size of the chunk of memory to be allocated.
     */
    virtual PtrType allocateBytes(size_t size) {
        return allocator_.allocateBytes(size);
    }

public:
    /**
     * Release the storage area associated with the object passed to
     * this method. <b>NOTE:</b> Not all memory support individual
     * object release.
     *
     * @param ptr the pointer to the memory chunk that has to be
     * released.
     */
    virtual void release(void* ptr) {
        allocator_.release(ptr);
    }

public:
    /**
     * Recalims all the objects allocated. Since this is a stack
     * allocator, once this method is called, all the contents is wiped
     * off, and the allocator is completely freed.
     */
    virtual void garbageCollect() {
//        printf("garbageCollect(): %p\n", this);
//        fflush(stdout);
        return allocator_.garbageCollect();
    }

    /**
     * Returns the used memory.
     */
    virtual size_t usedMemory() {
        return allocator_.usedMemory();
    }

    /**
     * Returns the available memory.
     */
    virtual size_t availableMemory() {
        return allocator_.availableMemory();
    }

    /**
     * Total memory associated with this allocator.
     */
    virtual size_t totalMemory() {
        return allocator_.totalMemory();
    }


public:
    /**
     * Returns an ID that represents the type of the given memory
     * area.
     */
    virtual size_t typeID() { return TYPE_ID; }

public:

protected:
    Allocator allocator_;
};

} /* jrate */ } /* mem */

#endif // _JRATE_MEM_MEMORY_AREA_H_
