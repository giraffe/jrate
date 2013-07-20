// ************************************************************************
//    $Id: SegregatedBufferProvider.h 429 2004-09-15 20:32:02Z corsaro $
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
#ifndef _JRATE_MEM_SEGREGATED_BUFFER_PROVIDER_H_
#define _JRATE_MEM_SEGREGATED_BUFFER_PROVIDER_H_

#if !defined (_JRATE_MEM_BUFFER_PROVIDER_H_)
#   error "Don't include SegregatedBufferProvider.h directly, please include Allocator.h"
#endif // !defined (_JRATE_MEM_BUFFER_PROVIDER_H_)

#include "jrate/synch/Guard.h"
#include "jrate/mem/StaticTypeSizeAligner.h"

#include "jrate/jRate.h"

namespace jrate { namespace mem {

template <size_t ALIGNMENT_EXP>
class SegregatedBufferProviderHeader;

template <typename  BufferProvider,
          size_t    ALIGNMENT_EXP,
          size_t    UNIT_EXP,
          typename  OutOfMemoryHandler,
          typename  Synchronizer>
    class SegregatedBufferProvider;


///////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////

template < size_t ALIGNMENT_EXP >
class SegregatedBufferProviderHeader {
public:
    SegregatedBufferProviderHeader() { }

    SegregatedBufferProviderHeader(size_t size,
                                   SegregatedBufferProviderHeader* prev,
                                   SegregatedBufferProviderHeader* next,
                                   SegregatedBufferProviderHeader* nextSegregated)
        : prev_(prev),
          next_(next),
          nextSegregated_(nextSegregated) { }

    ~SegregatedBufferProviderHeader() { }

public:
    inline size_t& size() { return size_; }
    inline bool& isFree() { return isFree_; }

    inline SegregatedBufferProviderHeader*& next()
        { return next_; }

    inline SegregatedBufferProviderHeader*& prev()
        { return prev_; }

    inline SegregatedBufferProviderHeader*& nextSegregated()
        { return nextSegregated_; }

    inline SegregatedBufferProviderHeader*& prevSegregated()
        { return prevSegregated_; }

    inline size_t& segregationIndex() { return segregationIndex_; }

    char* endOfThis() {
        char* retVal =
            ((char*)this)
            + jrate::mem::ComputeAlignedSize <
            ALIGNMENT_EXP,
            SegregatedBufferProviderHeader<ALIGNMENT_EXP> >::RESULT;
        return retVal;
    }

    static SegregatedBufferProviderHeader* startOfThis(char* ptr) {
        ptr -= jrate::mem::ComputeAlignedSize<
            ALIGNMENT_EXP,
            SegregatedBufferProviderHeader<ALIGNMENT_EXP> >::RESULT;
        return (SegregatedBufferProviderHeader*)ptr;
    }

private:
    SegregatedBufferProviderHeader* prev_;
    SegregatedBufferProviderHeader* next_;
    SegregatedBufferProviderHeader* prevSegregated_;
    SegregatedBufferProviderHeader* nextSegregated_;

    bool    isFree_;
    size_t  size_;
    size_t  segregationIndex_;
};
///////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////

/**
 * This class is optimized for large object allocation and
 * deallocation. While the minimum allocation unit can be configured,
 * typical uses of this class will set it to the size of a page for
 * the given system (e.g. 4096 bytes for Linux). This class is ideal
 * for being used as a a provider for the memory used by memory areas.
 *
 */
template <typename  BufferProvider,
          size_t    ALIGNMENT_EXP,
          size_t    UNIT_EXP,
          typename  OutOfMemoryHandler,
          typename  Synchronizer>
class SegregatedBufferProvider {
public:
    typedef BufferProvider    BufferProvider_t;
    typedef Synchronizer      Synchronizer_t;
    typedef SegregatedBufferProviderHeader<ALIGNMENT_EXP> SegregatedBufferProviderHeader_t;

public:
    SegregatedBufferProvider(size_t size)
        : buffer_ ((BufferProvider::instance()).getBuffer(size)),
          releaseCommand_(*this),
          usedMemory_(0) {
        slot_ = (size >>  UNIT_EXP);
        if ((slot_ << UNIT_EXP) != size)
            slot_++;
        size = slot_ << UNIT_EXP;
        initTable();
    }

    ~SegregatedBufferProvider() { }
public:
    jrate::mem::Buffer getBuffer(size_t size) {
        size_t slots = size >>  UNIT_EXP;
        if ((slots << UNIT_EXP) < size)
            slots++;
        // try to get buffer from the segregated list
        SegregatedBufferProviderHeader_t* header;
        jrate::synch::Guard<Synchronizer> guard(synchronizer_);
        char* ptr = 0;
        size_t realSize = slots << UNIT_EXP;
        usedMemory_ += realSize;

        // Case 1: Check to see if there are any available slots in
        // the segregated list.
        if (segregatedObjectList_[slots] != 0) {
            header = segregatedObjectList_[slots];
            JRATE_LOG (("[jRate<SegregatedBufferProvider>]: Allocating buffer from segregated list, %p\n",
                        header));

            header->isFree() = false;
            segregatedObjectList_[slots] = header->nextSegregated();
            if (segregatedObjectList_[slots] != 0)
                segregatedObjectList_[slots]->prevSegregated() = 0;

            ptr = header->endOfThis();
        }

        // Case 2: Check to see if there are any available slots in
        // the tail.
        else if (tail_->size() >= slots) {
            JRATE_LOG (("[jRate<SegregatedBufferProvider>]: Allocating buffer from tail, %p\n",
                        tail_));
            top_ += realSize;
            header = tail_;
            tail_ = (SegregatedBufferProviderHeader_t*)buffer_[top_];
            tail_->size() = header->size() - slots;
            tail_->prev() = header;
            tail_->next() = 0;
            tail_->isFree() = true;
            header->next() = tail_;
            header->size() = slots;
            header->isFree() = false;
            ptr = header->endOfThis();
        }
        // Case 3: We've ran out of memory!
        else {
            JRATE_LOG (("[jRate<SegregatedBufferProvider>]: Out of Memory\n"));
            OutOfMemoryHandler::handleOutOfMemory();
        }
        return jrate::mem::Buffer(ptr, realSize, true, &releaseCommand_);

    }

    bool releaseBuffer(jrate::mem::Buffer& buffer) {
        usedMemory_ -= buffer.size();
        size_t ID = (size_t)&this->releaseCommand_;
        if (!(buffer.handle() != 0 && buffer.allocatorID() == ID))
            return false;

        SegregatedBufferProviderHeader_t* sbp =
            SegregatedBufferProviderHeader_t::startOfThis(buffer[0]);

        JRATE_LOG(("[jRate<SegregatedBufferProvider>]: releaseBuffer, %p\n", sbp));

        sbp->isFree() = true;
        jrate::synch::Guard<Synchronizer> guard(synchronizer_);

        SegregatedBufferProviderHeader_t* next = sbp->next();
        SegregatedBufferProviderHeader_t* prev = sbp->prev();

        if (prev != 0) {
            if (next->isFree() && prev->isFree())
                this->mergeTrio(prev, sbp, next);
            else if (!prev->isFree() && next->isFree())
                this->mergeWithNext(sbp, next);
            else if (prev->isFree() && !next->isFree())
                this->mergeWithPrev(prev, sbp);
            else
                this->addToSegregatedList(sbp);
        }
        else {
            if (next->isFree())
                this->mergeWithNext(sbp, next);
            else
                this->addToSegregatedList(sbp);
        }
        return true;
    }


public:
    size_t size() {
        return buffer_.size();
    }

    size_t available() {
        return buffer_.size() - usedMemory_;
    }

    size_t maxContiguousChunk() {
        return tail_->size() << UNIT_EXP;
    }

private:

    /**
     * When this method is called "curr" is he slot being released,
     * and "prev" and "next" are its adjacent blocks. These could be
     * free, and thus in the segregated list, or taken.
     */
    void mergeTrio(SegregatedBufferProviderHeader_t* prev,
                   SegregatedBufferProviderHeader_t* curr,
                   SegregatedBufferProviderHeader_t* next) {
        // Require prev, curr, next != 0 and FREE

        // If prev and next are FREE this means that they are in the
        // segregated list, thus we need to remove them from it.
        prev->size() = prev->size() + curr->size() + next->size();
        prev->next() = next->next();

        if (next == tail_) {
            JRATE_LOG(("[jRate<SegregatedBufferProvider>]: mergeTrio-Tail\n"));
            tail_= prev;
            this->updateTop();
            this->removeFromSegregatedList(prev);
        }
        else {
            JRATE_LOG(("[jRate<SegregatedBufferProvider>]: mergeTrio-Inner\n"));
            next->next()->prev() = prev;
            this->removeFromSegregatedList(next);
        }
        memset(curr, 0, sizeof(SegregatedBufferProviderHeader_t));
        memset(next, 0, sizeof(SegregatedBufferProviderHeader_t));
    }

    void mergeWithNext(SegregatedBufferProviderHeader_t* curr,
                       SegregatedBufferProviderHeader_t* next) {
        curr->next() = next->next();
        curr->size() = curr->size() + next->size();

        if (next == tail_) {
            JRATE_LOG(("[jRate<SegregatedBufferProvider>]: mergeWithNext-Tail\n"));
            tail_ = curr;
            this->updateTop();
        }
        else {
            JRATE_LOG(("[jRate<SegregatedBufferProvider>]: mergeWithNext-Inner\n"));
            next->next()->prev() = curr;
            this->removeFromSegregatedList(next);
        }
        memset(next, 0, sizeof(SegregatedBufferProviderHeader_t));
    }

    void mergeWithPrev(SegregatedBufferProviderHeader_t* prev,
                       SegregatedBufferProviderHeader_t* curr) {
        JRATE_LOG(("[jRate<SegregatedBufferProvider>]: mergeWithPrev\n"));
        prev->next() = curr->next();
        prev->size() = prev->size() + curr->size();
        curr->next()->prev() = prev;
        memset(curr, 0, sizeof(SegregatedBufferProviderHeader_t));
    }


    void addToSegregatedList(SegregatedBufferProviderHeader_t* node) {
        JRATE_LOG(("[jRate<SegregatedBufferProvider>]: addToSegregatedList, %p\n", node));
        node->segregationIndex() = node->size();
        size_t index = node->segregationIndex();
        node->nextSegregated() = segregatedObjectList_[index];
        node->prevSegregated() = 0;
        if (segregatedObjectList_[index] != 0)
            segregatedObjectList_[index]->prevSegregated() = node;
        segregatedObjectList_[index] = node;
    }

    void removeFromSegregatedList(SegregatedBufferProviderHeader_t* node) {
        JRATE_LOG(("[jRate<SegregatedBufferProvider>]: removeFromSegregatedList, %p\n", node));
        SegregatedBufferProviderHeader_t* prev = node->prevSegregated();
        SegregatedBufferProviderHeader_t* next = node->nextSegregated();
        size_t index = node->segregationIndex();

        if (prev != 0 && next != 0) {
            prev->nextSegregated() = next;
            next->prevSegregated() = prev;
        }
        else if (prev == 0 && next != 0) {
            segregatedObjectList_[index] = next;
            next->prevSegregated() = 0;
        }
        else if (prev != 0 && next == 0) {
            prev->nextSegregated() = 0;
        }
        else /* (prev == 0 && next == 0) */ {
            segregatedObjectList_[index] = 0;
        }
    }

    inline void updateTop() {
        top_ = ((size_t)tail_) - ((size_t)buffer_[0]);
    }

    void initTable() {
        size_t slack = slot_ * sizeof(SegregatedBufferProviderHeader_t**);
        usedMemory_ = slack;
        top_ = 0;
        segregatedObjectList_ =
            (SegregatedBufferProviderHeader_t**)buffer_[buffer_.size() - slack];
        tail_ = (SegregatedBufferProviderHeader_t*)buffer_[top_];
        tail_->next() = 0;
        tail_->prev() = 0;
        tail_->nextSegregated() = 0;
        tail_->prevSegregated() = 0;
        tail_->isFree() = true;
        // Size in UNITS
        size_t slackInUnits = slack >> UNIT_EXP;
        if ((slackInUnits << UNIT_EXP) != slack)
            slackInUnits++;
        tail_->size() = slot_ - slackInUnits;
    }

private:
    Buffer  buffer_;
    size_t  top_;
    size_t  slot_;

    SegregatedBufferProviderHeader_t**  segregatedObjectList_;
    SegregatedBufferProviderHeader_t*   tail_;

    jrate::mem::ReleaseCommand<SegregatedBufferProvider>  releaseCommand_;

    Synchronizer  synchronizer_;
    size_t        usedMemory_;
};

} /* jrate */ } /* mem */

#endif // _JRATE_MEM_SEGREGATED_BUFFER_PROVIDER_H_
