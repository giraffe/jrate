// ************************************************************************
//    $Id: GCJBoehmAllocator.h 416 2004-02-22 18:35:45Z corsaro $
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
#ifndef _JRATE_BINDING_JAVA_GCJ_BOEHM_ALLOCATOR_H_
#define _JRATE_BINDING_JAVA_GCJ_BOEHM_ALLOCATOR_H_
#if 0
#include <jvm.h>

namespace jrate {
   namespace binding {
      namespace java {
         template <typename ObjectInitializer, typename PtrType>
         class GCJBoehmAllocator;
      }
   }
}

/**
 * This class provides a thin wrapper around the GCJ Boehm Allocator
 * API.
 */
template <typename ObjectInitializer, typename PtrType>
class jrate::binding::java::GCJBoehmAllocator
{
public:
   /**
    * Simce this class is a wrapper around the GCJ Boehm Allocator,
    * the parameters passed to this ctor are ignored. These are just
    * left for interface compliance.
    *
    * @param minSize the minumum allocator size
    * @param maxSize the maximim alocator size
    */
   GCJBoehmAllocator(size_t, size_t) { }
   

   ~GCJBoehmAllocator() { }

public:
   /**
    * Sets the object initializer for objects allocated by this
    * allocator
    *
    * @param initializer the initializer that will be invoked to
    * initializer the chunck of memory allocated by the allocator.
    */
   inline void setObjectInitializer(const ObjectInitializer& initializer) 
   { 
      this->objectInitializer_ = initializer;
   }


public:
   /**
    * Allocate a finalizable object.
    *
    * @param size the size of the object to allocate
    * @param klass the  class of the object to allocate
    */
   template <typename Klass> 
   inline PtrType allocateObject(size_t size,
                                 Klass* klass)
   {
      PtrType obj = (PtrType)_Jv_HeapAllocObject(klass, size);
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
   template <typename Klass> 
   inline PtrType allocateObjectNoFinalizer(size_t size,
                                            Klass* klass)
   {
      //      PtrType obj =                                           
      //         (PtrType)_Jv_HeapAllocObjectNoFinalizer(klass, size);
      PtrType obj =                                           
         (PtrType)_Jv_HeapAllocObject(klass, size);
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
   template <typename Klass> inline PtrType allocatePtrFreeObject(size_t size,
                                                                  Klass* klass)   
   { 
      PtrType obj = (PtrType)_Jv_HeapAllocPtrFreeZeroedObj(size, klass);
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
   template <typename Klass> inline PtrType allocatePtrFreeObjectNoFinalizer(size_t size,
                                                                             Klass* klass)
   { 
      PtrType obj = (PtrType)_Jv_HeapAllocPtrFreeZeroedObj(size, klass);
      this->objectInitializer_.setupObject(obj, klass);
      return obj;
   }

   /**
    * Allocates RawData, this is not guaranteed to be zeroed.
    *
    * @param size the size of the raw data object.
    */   
   inline PtrType allocateRawData(size_t size)
   {
      return (PtrType)_Jv_HeapAllocRawObj(size);
   }

   
   /**
    * Allocates a chunk of bytes. The memory provided is guaranteed to
    * be zeored. For this type of memory no finalizer is invoked.
    *
    * @param size the size of the chunk of memory to be allocated.
    */
   inline PtrType allocateBytes(size_t size)
   {
      return (PtrType)_Jv_HeapAllocBytes(size);
   }

public:
   /**
    * Returns the used memory.
    */
   inline size_t usedMemory()
   {
      return (_Jv_GCTotalMemory() - _Jv_GCFreeMemory());
   }

   /**
    * Returns the available memory.
    */
   inline size_t availableMemory()
   {
      return _Jv_GCFreeMemory();
   }
   
   /**
    * Total memory associated with this allocator.
    */
   inline size_t totalMemory()
   {
      return _Jv_GCTotalMemory();
   }

   /**
    * Gives the per-allocation memory overhead i.e. how much memory
    * does the allocator eats up per each allocation.
    */
   inline size_t allocatorMemoryOverhead()
   {
      return 0;
   }

   /**
    * Gives the memory overhead that the allocator is causing right
    * now. This clearly depends on how many allocation requests have
    * been done, and the unit overhead.
    */
   inline size_t allocatorCurrentMemoryOverhead()
   {
      return 0;
   }

public:
   /**
    * Recalims all the objects allocated. Since this is a stack
    * allocator, once this method is called, all the contents is wiped
    * off, and the allocator is completely freed.
    */
   inline void garbageCollect() { }

private:
   ObjectInitializer objectInitializer_;
};
#endif 
#endif // _JRATE_BINDING_JAVA_GCJ_BOEHM_ALLOCATOR_H_
