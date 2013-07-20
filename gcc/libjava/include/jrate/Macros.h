#ifndef _JRATE_MACROS_H_
#define _JRATE_MACROS_H_


///////////////////////////////////////////////////////////////////////////
//
//    jRate General Macros
//
///////////////////////////////////////////////////////////////////////////
//
// jRate's definitions of Yes and No
//
#define JRATE_YES  1
#define JRATE_NO   0



///////////////////////////////////////////////////////////////////////////
//
//    jRate Allocator Macros
//
///////////////////////////////////////////////////////////////////////////
//
//  Primitive  Memory Type Definitions
//
#define JRATE_CT_MEMORY      1
#define JRATE_LT_MEMORY      2
#define JRATE_VT_MEMORY      3


///////////////////////////////////////////////////////////////////////////
//
// Allocator Definitions
//

/***********************************************************************/
/* The following macros are used to configure the type of allocator to */
/*  be used by the different kind of memory areas.                     */
/*  Currently the allocator can oly be set for CT/LT/VT MemoryArea     */
/*  and for Immortal Memory.                                           */
/*                                                                     */
/*                                                                     */
/*                                                                     */
/*  JRATE_CT_MEMORY_ALLOCATOR       --   CTMemory Allocator            */
/*  JRATE_LT_MEMORY_ALLOCATOR       --   LTMemory Allocator            */
/*  JRATE_VT_MEMORY_ALLOCATOR       --   VTMemory Allocator            */
/*  JRATE_IMORTAL_MEMORY_ALLOCATOR  --   ImmortalMemory Allocator      */
/*  JRATE_IMORTAL_MEMORY            --   Type of ImmortalMemory (CT,   */
/*                                       LT, VT)                       */
/*                                                                     */
/*                                                                     */
/***********************************************************************/


//
// Definitions of the different type of allocators
//
#define JRATE_MEMORY_MAPPED_ALLOCATOR        1
#define JRATE_MALLOC_ALLOCATOR               2

/*
 * jRate Scheduling Policies
 */
#define JRATE_SCHED_FIFO    SCHED_FIFO
#define JRATE_SCHED_RR      SCHED_RR
#define JRATE_SCHED_OTHER   SCHED_OTHER

//
//
///////////////////////////////////////////////////////////////////////////

#endif // _JRATE_MACROS_H_
