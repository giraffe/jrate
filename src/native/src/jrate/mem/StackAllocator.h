// ************************************************************************
//    $Id: StackAllocator.h 429 2004-09-15 20:32:02Z corsaro $
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
#ifndef _JRATE_MEM_STACK_ALLOCATOR_H_
#define _JRATE_MEM_STACK_ALLOCATOR_H_


#if !defined (_JRATE_MEM_BUFFER_PROVIDER_H_)
#   error "Don't include StackAllocator.h directly, please include Allocator.h"
#endif // !defined (_JRATE_MEM_BUFFER_PROVIDER_H_)

namespace jrate { namespace mem {

class StackAllocatorHeader;
typedef StackAllocatorHeader DefaultStackAllocatorHeader_t;

template <typename  BufferProvider,
          typename  Header,
          size_t    ALIGNMENT,
          typename  OutOfMemoryHandler,
          typename  Synchronizer,
          typename  ObjectInitializer,
          typename  Finalizer,
          template<typename> class  Initializer,
          template<typename> class  Recycler,
          typename PtrType>
class  StackAllocator;


class StackAllocatorHeader {
public:
    inline size_t offset() {
        return offset_;
    }

    inline void offset(size_t offset) {
        offset_ = offset;
    }

private:
    unsigned int offset_;
};


/**
 * This class provides a stack-like allocation policy. It is supposed
 * to be used with the MemoryArea host class.
 *
 * In order to support OO languages that might need finalization, the
 * Allocator framework provide a way of distinguishing between the
 * allocation of raw data and objects. Objects are assumed to be
 * finalizable and iterators are provided to iterate over them for
 * finalization.
 *
 * The Header template parameter should support at least two field
 * which are a finalizable field and a size field.
 *
 */
 template <typename  BufferProvider,
          typename  Header,
          size_t    ALIGNMENT,
          typename  OutOfMemoryHandler,
          typename  Synchronizer,
          typename  ObjectInitializer,
          typename  Finalizer,
          template<typename> class  Initializer,
          template<typename> class  Recycler,
          typename PtrType>
class  StackAllocator {
public:
    typedef PtrType ptr_t;

    typedef BufferProvider    BufferProvider_t;
    typedef Synchronizer      Synchronizer_t;
    typedef ObjectInitializer ObjectInitializer_t;

    typedef void (*FinarizerFunc_t)(PtrType);

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
    StackAllocator(size_t minSize, size_t maxSize, BufferProvider& bp)
        : buffer_(bp.getBuffer(maxSize)),
          topIndex_(0),
          headerIndex_(-1) {
        Initializer<StackAllocator>::initialize(*this);
        this->headerVec_ = (Header*)(this->buffer_.handle() + this->buffer_.size());
    }

    /**
     * Creates an allocator that has a capacity of at least
     * <code>minSize</code> and at most <code>maxSize</code>, and uses
     * the class  provided buffer provider.
     *
     * @param minSize the minumum allocator size
     * @param maxSize the maximim alocator size
     */

    StackAllocator(size_t minSize, size_t maxSize)
        : buffer_((BufferProvider::instance()).getBuffer(maxSize)),
          topIndex_(0),
          headerIndex_(-1) {
        Initializer<StackAllocator>::initialize(*this);
        this->headerVec_ = (Header*)(this->buffer_.handle() + this->buffer_.size());
    }


    /**
     * Creates an allocator that has a capacity of at least
     * <code>minSize</code> and at most <code>maxSize</code>, and uses
     * the provided buffer provider in order to allocated the storage
     * needed to provide allocation service. It also uses a client
     * provided synchronizer.
     *
     * @param minSize      the minumum allocator size
     * @param maxSize      the maximim alocator size
     * @param bp           the byffer provider from with the buffer will
     *                     be requested
     * @param synchronizer the synchronizer object to be used in order
     *                     to make this allocator thread safe.
     */
    StackAllocator(size_t minSize, size_t maxSize, BufferProvider& bp, Synchronizer& synchronizer)
        : buffer_(bp.getBuffer(maxSize)),
          synchronizer_(synchronizer),
          topIndex_(0),
          headerIndex_(-1) {
        Initializer<StackAllocator>::initialize(*this);
        this->headerVec_ = (Header*)(this->buffer_.handle() + this->buffer_.size());
    }

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
    StackAllocator(size_t minSize, size_t maxSize,  Synchronizer& synchronizer)
        : synchronizer_(synchronizer),
          topIndex_(0),
          headerIndex_(-1) {
        buffer_ = BufferProvider::getBuffer(maxSize);
        Initializer<StackAllocator>::initialize(*this);
        this->headerVec_ = (Header*)(this->buffer_.handle() + this->buffer_.size());
    }


    /**
     * Finalizes the allocator releasing the buffer it was managing.
     */
    ~StackAllocator() { this->buffer_.release(); }

public:
    /**
     * Sets the object initializer for objects allocated by this
     * allocator
     *
     * @param initializer the initializer that will be invoked to
     * initializer the chunck of memory allocated by the allocator.
     */
    inline void setObjectInitializer(const ObjectInitializer& initializer) {
        this->objectInitializer_ = initializer;
    }

public: // -- Allocation Methods --
    /**
     * Allocate a finalizable object.
     *
     * @param size the size of the object to allocate
     * @param klass the  class of the object to allocate
     */
    template <typename Klass> inline PtrType allocateObject(size_t size,
                                                            Klass* klass) {
        PtrType obj = this->allocateChunk(size, true);
        Initializer<StackAllocator>::initChunk(obj, size);
        this->objectInitializer_.setupObject(obj, klass);
        return obj;
    }

    /**
     * Allocates a non-finalizable Object i.e. and object for which the
     * finalizer should not be ran upon reclamation.
     *
     * @param size the size of the object to allocate
     * @param klass the  class of the object to allocate
     */
    template <typename Klass> inline PtrType allocateObjectNoFinalizer(size_t size,
                                                                       Klass* klass) {
        PtrType obj = this->allocateChunk(size, false);
        Initializer<StackAllocator>::initChunk(obj, size);
        this->objectInitializer_.setupObject(obj, klass);
        return obj;
    }

    /**
     * Allocate an object which is guaranteed to be pointer-free. This
     * measn that this object does not influence the reachibility of
     * any object. This information is useful for GC.
     *
     * @param size the size of the object to allocate
     * @param klass the  class of the object to allocate
     */
    template <typename Klass> inline PtrType
    allocatePtrFreeObject(size_t size, Klass* klass)
    {
        PtrType obj = this->allocateChunk(size, true);
        Initializer<StackAllocator>::initChunk(obj, size);
        this->objectInitializer_.setupObject(obj, klass);
        return obj;
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
    template <typename Klass> inline PtrType
    allocatePtrFreeObjectNoFinalizer(size_t size, Klass* klass)
    {
        PtrType obj = this->allocateChunk(size, false);
        Initializer<StackAllocator>::initChunk(obj, size);
        this->objectInitializer_.setupObject(obj, klass);
        return obj;
    }

    /**
     * Allocates RawData, this is not guaranteed to be zeroed.
     *
     * @param size the size of the raw data object.
     */
    inline PtrType allocateRawData(size_t size) {
        return this->allocateChunk(size, false);
    }

    /**
     * Allocates a chunk of bytes. The memory provided is guaranteed to
     * be zeored. For this type of memory no finalizer is invoked.
     *
     * @param size the size of the chunk of memory to be allocated.
     */
    inline PtrType allocateBytes(size_t size) {
        PtrType obj = this->allocateChunk(size, false);
        Initializer<StackAllocator>::initChunk(obj, size);
        return obj;
    }

public:
   /**
    * Since this is a stack allocator, requests for single object
    * reclamation are ignored.
    */
    inline void release(void* ptr) { }

public:
    /**
     * Zeroes the allocated portion of the buffer managed by this
     * allocator.
     */
    void zeroAllocatedBuffer() {
        this->buffer_.set(0, this->topIndex_, 0);

        // Notice that we really need to zero the part of the buffer in
        // which we store the header only if this condition is satisfied.
        // Moreover, notice that this is a compile time decidable test, so
        // a smart compiler can just eliminate this pieceof code in case in
        // which sizeof(Header) <= ALIGNMENT.
        if (sizeof(Header) > ALIGNMENT) {
            size_t bottomIndex = -(this->headerIndex_ * sizeof(Header));
            this->buffer_.set(bottomIndex, this->buffer_.size(), 0);
        }
        this->buffer_.isClean() = true;
    }

    /**
     * Zeroes the allocated portion of the buffer managed by this
     * allocator.
     */
    void zeroBuffer() {
        this->buffer_.cleanup();
    }

public:
    /**
     * Recalims all the objects allocated. Since this is a stack
     * allocator, once this method is called, all the contents is wiped
     * off, and the allocator is completely freed.
     */
    void garbageCollect() {
        this->synchronizer_.acquire();
        Finalizer finalizer;

        for (int i = -1; i > this->headerIndex_; i--) {
            finalizer((PtrType)this->buffer_[this->headerVec_[i].offset()]);
        }

        Recycler<StackAllocator>::recycle(*this);
        this->reset();
        this->synchronizer_.release();
    }

public:
    /**
     * Returns the used memory.
     */
    inline size_t usedMemory() {
        // This is right since headerIndex__ is negative!!!
        return this->topIndex_ - (this->headerIndex_ * sizeof(Header));
    }

    /**
     * Returns the available memory.
     */
    inline size_t availableMemory() {
        return this->buffer_.size() - this->topIndex_ +
               (this->headerIndex_ * sizeof(Header));
    }

    /**
     * Total memory associated with this allocator.
     */
    inline size_t totalMemory() {
        return this->buffer_.size();
    }

    /**
     * Gives the per-allocation memory overhead i.e. how much memory
     * does the allocator eats up per each allocation.
     */
    inline size_t allocatorMemoryOverhead() {
        return sizeof(Header);
    }

    /**
     * Gives the memory overhead that the allocator is causing right
     * now. This clearly depends on how many allocation requests have
     * been done, and the unit overhead.
     */
    inline size_t allocatorCurrentMemoryOverhead() {
        return -(this->headerIndex_ * sizeof(Header));
    }


protected:
    PtrType allocateChunk(size_t size, bool finalizable) {

        this->synchronizer_.acquire();
        size_t newTopIndex =
            jrate::mem::AlignmentTrait<ALIGNMENT>::align(this->topIndex_ + size);
        // Check if we are out of memory (remember we have to save
        // space for one header
        if ((size_t)(this->buffer_[newTopIndex] )
            > (size_t)(&(this->headerVec_[this->headerIndex_])))
        {
            this->synchronizer_.release();
            OutOfMemoryHandler::handleOutOfMemory();
        }

        // If we got here, then we have enoght memory
        if (__builtin_expect(finalizable == true, false)) {
            this->headerVec_[this->headerIndex_].offset(topIndex_);
            this->headerIndex_--;
        }

        PtrType ptr = (PtrType)this->buffer_[this->topIndex_];
        this->topIndex_ = newTopIndex;
        this->synchronizer_.release();
        return ptr;
    }

    /**
     * Resets the allocator, the next allocation after the invocation
     * of this operation will be assuming the buffer was empty.
     */
    void reset() {
        this->topIndex_ = 0;
        this->headerIndex_ = -1;
    }

protected:
    jrate::mem::Buffer  buffer_;
    Synchronizer        synchronizer_;
    ObjectInitializer   objectInitializer_;
    size_t   topIndex_;
    int      headerIndex_;
    Header*  headerVec_; // This is actually a reverse array, i.e. uses
    // negative indexes. The first element is at -1.
};

} /* jrate */ } /* mem */
#endif // _JRATE_MEM_STACK_ALLOCATOR_H_
