// ************************************************************************
//    $Id: PriorityQueue.java 416 2004-02-22 18:35:45Z corsaro $
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

package javax.realtime;

/**
 * This class represent a priority queue. A priority queues stores
 * element in a order described by their priority. This implementation
 * provides with lock free iterators for browsing the element of the
 * queue. While writes are serialized by a write-lock.
 *
 * This class guarantees that the iterator keep consistent even while
 * element are being added or removed. 
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public class PriorityQueue {

    protected PriorityQueueLane queueHead;
    protected PriorityQueueLane queueTail;
    
    ///////////////////////////////////////////////////////////////
    //
    
    protected static class Item {
        Object data;
        Item next;
        
        Item(Object data) {
            this.data = data;
        }
    }

    //
    //
    //////////////////////////////////////////////////////////////////
    //
    //
    
    /**
     * This class implements a priority lane that is used to group
     * together all the objects that have the same priority.
     *
     */
    protected static class PriorityQueueLane {
        
        int priority;
        Item first;
        Item last;
        
        PriorityQueueLane prev;
        PriorityQueueLane next;
        
        
        ////////////////////////////////////////////
        //
        //
        static class ForwardIterator {
            protected Item nextItem;
            
            ForwardIterator(Item next) {
                this.setup(next);
            }

            ForwardIterator() {
                
            }
            
            protected void setup(Item next) {
                this.nextItem = next;
            }
            
            Object next() {
                if (this.nextItem == null)
                    return null;
                
                Object retVal = null;
                if (this.nextItem != null) {
                    retVal = this.nextItem.data;
                    this.nextItem = this.nextItem.next;
                }
                return retVal;
            }
        }
        //
        //
        //////////////////////////////////////////////
        //
        //
        
        
        PriorityQueueLane(int priority) {
            this.priority = priority;
        }

        
        ForwardIterator iterator() {
            return new ForwardIterator(this.first);
        }

        void iterator(ForwardIterator iterator) {
            iterator.setup(this.first);
        }
        
        synchronized void add(Object object) {
            if (this.first == null) {
                this.first = new Item(object);
                this.last = this.first;
            }
            else {
                this.last.next = new Item(object);
                this.last = this.last.next;
            }
        }

        boolean contains(Object object) {
            Item cursor = this.first;
            boolean found = false;
            while (cursor != null && !found) {
                if (object == cursor.data)
                    found = true;
                else
                    cursor = cursor.next;
            }
            return found;
        }

        synchronized Object remove(Object object) {
            Item cursor = this.first;
            Item prev = null;
            Item next = null;
            boolean found = false;
            while (cursor != null && !found) {
                if (object == cursor.data) {
                    next = cursor.next;
                    found = true;
                }
                else {
                    prev = cursor ;
                    cursor = cursor.next;
                }
            }
            
            if (found) {
                if (cursor == this.first) 
                    this.first = next;
                else if (cursor == this.last)
                    this.last = prev;
                else 
                    prev.next = next;
                return object;
            }
            return null;
        }
    }
    
    //
    //
    /////////////////////////////////////////////////////
    //
    //
    static public class ForwardIterator {

        private PriorityQueueLane currentLane;
        private PriorityQueueLane.ForwardIterator laneIterator;
        
        protected ForwardIterator(PriorityQueueLane currentLane) {
            this.currentLane = currentLane;
            this.laneIterator = currentLane.iterator();
        }

        protected ForwardIterator() {
            laneIterator = new PriorityQueueLane.ForwardIterator();
        }
        
        public Object next() {
            if (this.laneIterator == null)
                return null;
            Object retVal = this.laneIterator.next();
            if (retVal == null) {
                if (this.currentLane != null) {
                    this.currentLane = this.currentLane.next;
                    if (this.currentLane != null)
                        this.currentLane.iterator(this.laneIterator);
                    
                    return this.laneIterator.next();
                }
                else
                    return null;
            }
            return retVal;
        }

    }
    //
    //
    /////////////////////////////////////////////////////////////////////////////
    
    public PriorityQueue.ForwardIterator iterator() {
        if (this.queueHead != null)
            return new PriorityQueue.ForwardIterator(this.queueHead);
        
        return new PriorityQueue.ForwardIterator();
    }
    
    public void iterator(PriorityQueue.ForwardIterator iterator) {
        iterator.currentLane = this.queueHead;
        if (this.queueHead != null)
            this.queueHead.iterator(iterator.laneIterator);
    }
    
    public synchronized void add(Object object, int priority) {

        if (this.queueHead == null) {
            PriorityQueueLane tmp = new PriorityQueueLane(priority);
            tmp.add(object);
            this.queueHead = tmp;
            this.queueTail = tmp;
            tmp = null;
            return;
        }

        PriorityQueueLane index = this.queueHead;

        while (index != null && index.priority > priority)
            index = index.next;

        // Tail Insert
        if (index == null) {
            //            System.out.println("TAIL ADD: " + priority);
            PriorityQueueLane tmp = new PriorityQueueLane(priority);
            tmp.add(object);
            tmp.prev = this.queueTail;
            this.queueTail.next = tmp;
            this.queueTail = tmp;
            tmp = null;
            return;
        }

        // We already got the lane for this priority
        if (index != null && index.priority == priority) {
            //            System.out.println("PRE-EXIST ADD: "  + priority);
            index.add(object);
            return;
        }

        // Insert at the  head
        if (index == this.queueHead && index.priority != priority) {
            //            System.out.println("HEAD ADD: "  + priority);
            PriorityQueueLane tmp = new PriorityQueueLane(priority);
            tmp.add(object);
            tmp.next = index;
            index.prev = tmp;
            this.queueHead = tmp;
            this.queueTail = index;
            return;
        }
        
        // Insert in the middle
        if (index != null && index.priority != priority) {
            //            System.out.println("MIDDLE ADD: " + priority);
            PriorityQueueLane tmp = new PriorityQueueLane(priority);
            tmp.add(object);
            tmp.next = index;
            index.prev.next = tmp;
            tmp.prev = index.prev;
            index.prev = tmp;
            return;
        }
    }
    

    public boolean contains(Object object) {
        PriorityQueueLane lane = this.queueHead;
        boolean found = false;
        while (lane != null && !found) {
            if (lane.contains(object))
                found = true;
            else lane = lane.next;
        }
        return found;
    }
    
    public void remove(Object object) {
        PriorityQueueLane lane = this.queueHead;
        boolean removed = false;
        while (lane != null && !removed) {
            if (lane.remove(object) == object) 
                removed = true;
            else
                lane = lane.next;
        }
    }
    
//     public static void main(String[] args) {
//         PriorityQueue queue = new PriorityQueue();
//         PriorityQueue.ForwardIterator iterator;
//         Object elem = null;

//         for (int i = 10; i > 0; i--) {
//             int val = (int)(Math.random()*10);
//             queue.add(new Integer(val), val );

//         }

//         iterator = queue.iterator();
//         while ((elem = iterator.next()) != null)
//             System.out.println(elem);

//         for (int i = 10; i > 0; i--) {
//             int val = (int)(Math.random()*10);
//             queue.add(new Integer(val), val );

//         }
        
//         iterator = queue.iterator();
//         while ((elem = iterator.next()) != null)
//             System.out.println(elem);

        
//         for (int i = 0; i < 10; i ++)
//             queue.add(new Integer(i), i);

//         PriorityQueue.ForwardIterator iteratorTemp = queue.iterator();
//         iterator = queue.iterator();
//         while ((elem = iterator.next()) != null)
//             System.out.println(elem);

//         for (int i = 10; i > 0; i--)
//             queue.add(new Integer(i), i);

//         iterator = queue.iterator();
//         while ((elem = iterator.next()) != null)
//             System.out.println(elem);

//         System.out.println("--------------------------------------------------");

//         while ((elem = iteratorTemp.next()) != null)
//             System.out.println(elem);

//     }
}
