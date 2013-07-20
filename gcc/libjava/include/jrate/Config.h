#ifndef _JRATE_CONFIG_H_
#define _JRATE_CONFIG_H_

#include <jrate/Macros.h>
#include <sched.h>



/*************************************************************************/
/*                                                                       */
/*   This file contains the jRate configuration. Here the allocator to   */
/*   used should be defined along with the other option that can be      */
/*   used to configure jRate                                             */
/*                                                                       */
/*                                                                       */
/*************************************************************************/

#define JRATE_CT_MEMORY_ALLOCATOR        JRATE_MEMORY_MAPPED_ALLOCATOR
// #define JRATE_CT_MEMORY_ALLOCATOR         JRATE_MALLOC_ALLOCATOR

#define JRATE_LT_MEMORY_ALLOCATOR       JRATE_MEMORY_MAPPED_ALLOCATOR
//#define JRATE_LT_MEMORY_ALLOCATOR         JRATE_MALLOC_ALLOCATOR

#define JRATE_VT_MEMORY_ALLOCATOR         JRATE_MALLOC_ALLOCATOR

// #define JRATE_IMMORTAL_MEMORY_ALLOCATOR  JRATE_MEMORY_MAPPED_ALLOCATOR
#define JRATE_IMMORTAL_MEMORY_ALLOCATOR  JRATE_MEMORY_MAPPED_ALLOCATOR

#define JRATE_IMMORTAL_MEMORY                  JRATE_LT_MEMORY


/*
 * Here configure the custom size for the Heap, Immortal Memory and so on...
 */
#define JRATE_IMMORTAL_MEMORY_SIZE 64 // MB
#define JRATE_HEAP_MEMORY_SIZE 32 // MB
#define JRATE_METHOD_AREA_MEMORY_SIZE 32 // MB
#define JRATE_SCOPES_ARENA_SIZE 64 // MB


#define JRATE_DO_FINALIZE      JRATE_YES
#define JRATE_MEMLOCK          JRATE_YES
#define JRATE_ENSURE_MEMLOCK   JRATE_YES
#define ALWAYS_ZERO_MEMORY     JRATE_YES

/*
 * jRate Scheduler configuration
 */
#define JRATE_THREAD_SCHED_POLICY             JRATE_SCHED_OTHER
#define JRATE_REAL_TIME_THREAD_SCHED_POLICY   JRATE_SCHED_FIFO


#include <jrate/Defaults.h>


#endif // _JRATE_CONFIG_H_
