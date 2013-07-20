// ************************************************************************
//    $Id: jRate.h 527 2005-04-01 21:28:33Z mdeters $
// ************************************************************************
//
//
//               Copyright (C) 2001-2002 by Angelo Corsaro.
//                         <corsaro@ece.uci.edu>
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

#ifndef _JRATE_MAIN_CONFIG_H_
#define _JRATE_MAIN_CONFIG_H_

//
// Pull in autoconf stuff
//
#include <jRate-config.h>

#include <java/lang/Object.h>

//
// Tracing Macros 
//
#if (JRATE_TRACE == 1)
#include <stdio.h>
#  define JRATE_LOG(message) printf message; fflush(stdout);
#  define JRATE_LOG_FLUSH() fflush(stdout)
#else
#  define JRATE_LOG(message)
#  define JRATE_LOG_FLUSH()
#endif

//
// The following macros define the  memory alignement assumption  that
// are  taken by  GCJ,  and that jRate's needs  to  cope with in  itss
// allocators
//
// NOTE: Since GCJ 3.1 the  fact  that the Bohem collector  guarantees
// that the 3 lower bit of an object address are zero is used in order
// to implement locking. Because of   this when allocating object   we
// have to  maintain this invariant i.e.  guarrantee that the lowest 3
// bit are always zero.
//
#define ALIGNEMENT_MASK      0xFFFFFFF8
#define ALIGNED_INCREMENT    0x8
#define ALIGNEMENT_FLAG      0x7
#define ALLOCATION_UNIT      8
#define ZERO_LOWER_BIT       3
#define ALIGN_ADDRESS(addr) (((addr) >> ZERO_LOWER_BIT) << ZERO_LOWER_BIT)

// Useful macros
#define toJObject(ptr) ((java::lang::Object *)(ptr))
#define MEM_AREA(ma) ((::jrate::binding::java::IMemoryArea_t*)((ma)->ma_))
#define SAFE_MEM_AREA(ma) (((ma) == 0) ? 0 : ((::jrate::binding::java::IMemoryArea_t*)((ma)->ma_)))

// Allows to eliminate annoying warning about unused args 
#define JRATE_UNUSED_ARG(x) do { /* nothing */ }while (&(x) == 0)

// -- Useful Typedefs --

typedef java::lang::Object JObject;
typedef java::lang::Class JClass;

// -- Environment Variables --
#define JRATE_IMMORTAL_MEMORY_SIZE_ENV_VAR   "JRATE_IMMORTAL_MEMORY_SIZE"
#define JRATE_HEAP_MEMORY_SIZE_ENV_VAR       "JRATE_HEAP_MEMORY_SIZE"
#define JRATE_METHOD_MEMORY_SIZE_ENV_VAR     "JRATE_METHOD_MEMORY_SIZE"
#define JRATE_SCOPES_ARENA_SIZE_ENV_VAR      "JRATE_SCOPES_ARENA_SIZE"

#define jRateSetMemoryArea(object, memoryArea) ((object)->memory_area = (memoryArea))

// -- Miscellaneous --
#define POW_3_TEN 1000
#define POW_6_TEN 1000000
#define POW_9_TEN 1000000000

#define CLOCK_PERIOD_NS  (1000.0/(CLOCK_FREQUENCY))
#define CLOCK_PERIOD_US  (1.0/(CLOCK_FREQUENCY))

#endif // _JRATE_MAIN_CONFIG_H_
