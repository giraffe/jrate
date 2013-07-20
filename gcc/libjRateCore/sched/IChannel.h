// ************************************************************************
//    $Id: IChannel.h 429 2004-09-15 20:32:02Z corsaro $
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
#ifndef _JRATE_SCHED_ICHANNEL_H_
#define _JRATE_SCHED_ICHANNEL_H_

namespace jrate { namespace sched {

template <typename ChannelItem>
class IChannel;

template <typename ChannelItem>
class IChannel<ChannelItem*>;

/**
 * A <code>Channel</code> provides a basic abstraction mechanism that
 * can be used to have two different threads communicate.
 */
template <typename ChannelItem>
class IChannel {
public:
    typedef ChannelItem   Item_t;
    typedef ChannelItem*  ItemPtr_t;

public:
    virtual ~IChannel() { }

public:
    /**
     * Puts a <code>ChannelItem</code> into the channel.
     */
    virtual void push(const Item_t& item) = 0;

    /**
     * Gets a <code>ChannelItem</code> into the channel.
     */
    virtual const Item_t& pop() = 0;

    /**
     * Returns the capacity of the channel.
     */
    virtual size_t size() = 0;

};


/**
 * A <code>Channel</code> provides a basic abstraction mechanism that
 * can be used to have two different threads communicate.
 */
template <typename ChannelItem>
class IChannel<ChannelItem*> {
public:
    typedef ChannelItem   Item_t;
    typedef ChannelItem*  ItemPtr_t;

public:
    virtual ~IChannel() { }

public:
    /**
     * Puts a <code>ChannelItem</code> into the channel.
     */
    virtual void push(ItemPtr_t item) = 0;

    /**
     * Gets a <code>ChannelItem</code> into the channel.
     */
    virtual ItemPtr_t pop() = 0;

    /**
     * Returns the capacity of the channel.
     */
    virtual size_t size() = 0;

};

} /* jrate */ } /* sched */

#endif /* _JRATE_SCHED_ICHANNEL_H_ */
