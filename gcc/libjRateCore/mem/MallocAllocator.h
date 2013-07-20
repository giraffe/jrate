// ************************************************************************
//    $Id: MallocAllocator.h 527 2005-04-01 21:28:33Z mdeters $
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
#ifndef _JRATE_MEM_MALLOC_ALLOCATOR_H_
#define _JRATE_MEM_MALLOC_ALLOCATOR_H_

///////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////

namespace jrate { namespace mem {

template <size_t N>
class DefaultMallocAllocatorHeader;

template <typename Header,
          typename Synchronizer,
          typename ObjectInitializer,
          typename Finalizer,
          template<typename> class Initializer,
          typename PtrType>
    class  MallocAllocator;


template <size_t N>
class DefaultMallocAllocatorHeader {
public:
    enum {SLOT_NUMBER = N};
    enum {FULL = N};

public:
    DefaultMallocAllocatorHeader() : usedSlot_(0), next_(0) {}
    ~DefaultMallocAllocatorHeader() {}
public:

    size_t getFreeSlot() {
        return (this->usedSlot_ < SLOT_NUMBER) ? this->usedSlot_++ : this->usedSlot_;
    }

    void setNext(DefaultMallocAllocatorHeader* next) {
        this->next_ = next;
    }

    void setSlot(size_t index, void* addr, bool finalizable) {
        this->slot_[index].addr = addr;
        this->slot_[index].finalizable = finalizable;
    }

    bool isSlotFinalizable(size_t index) {
        return this->slot_[index].finalizable;
    }

    void* getSlotAddress(size_t index) {
        return this->slot_[index].addr;
    }

    size_t usedSlot() {
        return this->usedSlot_;
    }

    void reset() {
        this->next_ = 0;
        this->usedSlot_ = 0;
    }

    DefaultMallocAllocatorHeader* next() { return this->next_;}

private:
    struct Slot {
        void* addr;
        bool finalizable;
    };
private:
    size_t usedSlot_;
    DefaultMallocAllocatorHeader* next_;
    Slot slot_[N];
};

///////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////

/**
 * This class provides a Malloc backed-up allocator.
 */
template <typename Header,
          typename Synchronizer,
          typename ObjectInitializer,
          typename Finalizer,
          template<typename> class Initializer,
          typename PtrType>
class MallocAllocator {
public:
    typedef PtrType ptr_t;

    typedef Synchronizer      Synchronizer_t;
    typedef ObjectInitializer ObjectInitializer_t;

public:
    /**
     * Creates an allocator that has a capacity of at least
     * <code>minSize</code> and at most <code>maxSize</code>, and uses
     * the class  provided buffer provider.
     *
     * @param minSize the minumum allocator size
     * @param maxSize the maximim alocator size
     */
    MallocAllocator(size_t minSize, size_t maxSize)
        : maxMemory_(maxSize), headerCount_(1) {
        this->head_ = this->tail_ = new Header();
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
    MallocAllocator(size_t minSize, size_t maxSize, Synchronizer& synchronizer)
        : maxMemory_(maxSize),
          synchronizer_(synchronizer),
          headerCount_(1) {
        this->head_ = this->tail_ = new Header();
        this->usedMemory_ = sizeof(Header);
    }

    ~MallocAllocator() {
        free(this->head_);
    }

public:
    /**
     * Sets the object initializer for objects allocated by this
     * allocator
     *
     * @param initializer the initializer that will be invoked to
     * initializer the chunck of memory allocated by the allocator.
     */
    inline void setObjectInitializer(const ObjectInitializer& initializer)  {
        this->objectInitializer_ = initializer;
    }

public:

    /**
     * Allocate a finalizable object.
     *
     * @param size the size of the object to allocate
     * @param klass the  class of the object to allocate
     */
    template <typename Klass> inline PtrType allocateObject(size_t size,
                                                            Klass* klass) {
        PtrType obj = this->allocateChunk(size, true);
        Initializer<MallocAllocator>::initChunk(obj, size);
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
        Initializer<MallocAllocator>::initChunk(obj, size);
        this->objectInitializer_.setupObject(obj, klass);
        return obj;
    }

    /**
     * Allocate an object which is guaranteed to be pointer-free. This
     * measn that this object does not influence the reachibility of
     * any object. This information is useful for GC.
     *
     * @param size the size of the object to allocate
     * @param klass the class of the object to allocate
     */
    template <typename Klass> inline PtrType allocatePtrFreeObject(size_t size,
                                                                   Klass* klass)
    {
        PtrType obj = this->allocateChunk(size, true);
        Initializer<MallocAllocator>::initChunk(obj, size);
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
     * @param klass the class of the object to allocate
     */
    template <typename Klass> inline PtrType
    allocatePtrFreeObjectNoFinalizer(size_t size,
                                     Klass* klass)
    {
        PtrType obj = this->allocateChunk(size, false);
        Initializer<MallocAllocator>::initChunk(obj, size);
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
        Initializer<MallocAllocator>::initChunk(obj, size);
        return obj;
    }

    inline void release(void* ptr) { }


public:
/**
 * Returns the used memory.
 */
    inline size_t usedMemory() {
        return this->usedMemory_;
    }

/**
 * Returns the available memory.
 */
    inline size_t availableMemory() {
        return this->maxMemory_ - this->usedMemory_;
    }

/**
 * Total memory associated with this allocator.
 */
    inline size_t totalMemory() {
        return this->maxMemory_;
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
        return this->headerCount_ * sizeof(Header);
    }

public:
/**
 * Recalims all the objects allocated. Since this is a stack
 * allocator, once this method is called, all the contents is wiped
 * off, and the allocator is completely freed.
 */
    void garbageCollect() {
        Header *current = 0;
        Header* prev;
        Finalizer finalizer;
        // This part only needs to be synchronized.
        {
            this->synchronizer_.acquire();
            current = this->head_;
            for (size_t i = 0; i < current->usedSlot(); ++i) {
                if (current->isSlotFinalizable(i))
                    finalizer((PtrType)current->getSlotAddress(i));
                free(current->getSlotAddress(i));
            }
            current = this->head_->next();
            this->reset();
            this->synchronizer_.release();
        }
        while (current != 0) {
            for (size_t i = 0; i < current->usedSlot(); ++i) {
                if (current->isSlotFinalizable(i))
                    finalizer((PtrType)current->getSlotAddress(i));
                free(current->getSlotAddress(i));
            }
            prev = current;
            current = current->next();
            // std::cout << "[MallocAllocator]>> Next Header: " << current << std::endl;
            delete prev;
        }
    }

private:
    void reset() {
        this->headerCount_ = 1;
        this->usedMemory_ = sizeof(Header);
    }

    PtrType allocateChunk(size_t size, bool finalizable) {
        // Guard are not used to avoid creating and destroying an object
        // in the crytical path
        this->synchronizer_.acquire();

        int slot = 0;
        if ((slot = this->tail_->getFreeSlot()) == Header::FULL) {
            Header* header = new Header();

            this->headerCount_++;
            this->tail_->setNext(header);
            this->tail_ = header;
            slot = this->tail_->getFreeSlot();
            this->usedMemory_ += sizeof(Header);
        }
        PtrType addr = (PtrType)malloc(size);
        this->tail_->setSlot(slot, addr, finalizable);
        this->usedMemory_ += size;

        this->synchronizer_.release();


        return addr;
    }

private:
    Synchronizer synchronizer_;
    ObjectInitializer objectInitializer_;
    Header* head_;
    Header* tail_;
    size_t usedMemory_;
    size_t maxMemory_;
    size_t headerCount_;
};

} /* jrate */ } /* mem */
#endif // _JRATE_MEM_MALLOC_ALLOCATOR_H_
