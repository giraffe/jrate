// ************************************************************************
//    $Id: Channel.h 429 2004-09-15 20:32:02Z corsaro $
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
#ifndef _JRATE_SCHED_CHANNEL_H_
#define _JRATE_SCHED_CHANNEL_H_

#include "jrate/sched/IChannel.h"

#include "jrate/synch/Semaphore.h"
#include "jrate/synch/Guard.h"

#include <iostream>

namespace jrate { namespace sched {

template <typename ChannelItem,
          template <typename> class ChannelImpl,
          typename Synchronizer>
class Channel;

template <typename ChannelItem,
          template <typename> class ChannelImpl,
          typename Synchronizer>
class Channel<ChannelItem*, ChannelImpl, Synchronizer>;

/**
 * A <code>Channel</code> provides a basic abstraction mechanism that
 * can be used to have two different threads communicate.
 */
template <typename ChannelItem,
          template <typename> class ChannelImpl,
          typename Synchronizer>
class Channel
    : public jrate::sched::IChannel<ChannelItem>
{
public:
    typedef ChannelItem   Item_t;
    typedef ChannelItem*  ItemPtr_t;

public:
    /**
     * Creates a channel with a given capability.
     */
    Channel(size_t size)
        : size_(size),
          notFull_(size),
          notEmpty_(0) { }

    virtual ~Channel() { }

public:
    /**
     * Puts a <code>ChannelItem</code> into the channel.
     */
    virtual void push(const Item_t& item) {
        notFull_.wait();
        {
            jrate::synch::Guard<Synchronizer> synchronizer;
            items_.push(item);
        }
        notEmpty_.signal();
    }

    /**
     * Gets a <code>ChannelItem</code> into the channel.
     */
    virtual const Item_t& pop() {
        Item_t retVal;
        notEmpty_.wait();
        {
            jrate::synch::Guard<Synchronizer> synchronizer;
            retVal = items_.top();
            items_.pop();
        }
        notFull_.signal();
        return retVal;
    }

    virtual size_t size() { return size_; }

protected:
    size_t size_;
    jrate::synch::Semaphore notFull_;
    jrate::synch::Semaphore notEmpty_;
    ChannelImpl<Item_t> items_;
    Synchronizer mutex_;
};

/**
 * A <code>Channel</code> provides a basic abstraction mechanism that
 * can be used to have two different threads communicate.
 */
template <typename ChannelItem,
          template <typename> class ChannelImpl,
          typename Synchronizer>
class Channel<ChannelItem*, ChannelImpl, Synchronizer>
    : public jrate::sched::IChannel<ChannelItem*>
{
public:
    typedef ChannelItem Item_t;
    typedef ChannelItem* ItemPtr_t;

public:
    /**
     * Creates a channel with a given capability.
     */
    Channel(size_t size) :
        size_(size),
        notFull_(size),
        notEmpty_(0) { }

    virtual ~Channel() { }

public:
    /**
     * Puts a <code>ChannelItem</code> into the channel.
     */
    virtual void push(ItemPtr_t item) {
        notFull_.wait();
        {
            jrate::synch::Guard<Synchronizer> synchronizer(mutex_);
            items_.push(item);
            std::cout << "Channel:>> Pushed Item: " << item << std::endl;
        }
        notEmpty_.signal();

    }

    /**
     * Gets a <code>ChannelItem</code> into the channel.
     */
    virtual ItemPtr_t pop() {
        ItemPtr_t retVal;
        notEmpty_.wait();
        {
            jrate::synch::Guard<Synchronizer> synchronizer(mutex_);
            retVal = items_.front();
            items_.pop();
            std::cout << "Channel:>> Popping Item: " << retVal << std::endl;
        }
        notFull_.signal();
        return retVal;
    }

    virtual size_t size() { return size_; }

protected:
    size_t size_;
    jrate::synch::Semaphore notFull_;
    jrate::synch::Semaphore notEmpty_;
    ChannelImpl<ItemPtr_t> items_;
    Synchronizer mutex_;
};

} /* jrate */ } /* sched */

#endif /* _JRATE_SCHED_CHANNEL_H_ */
