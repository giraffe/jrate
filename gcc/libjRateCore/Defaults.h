#ifndef _JRATE_DEFAULTS_H_
#define _JRATE_DEFAULTS_H_


/////////////////////////////////////////////////////////////////////////
//
//                       DEFAULT SETTINGS
//
/////////////////////////////////////////////////////////////////////////

#if !defined (JRATE_CT_MEMORY_ALLOCATOR)
#   define JRATE_CT_MEMORY_ALLOCATOR          JRATE_MEMORY_MAPPED_ALLOCATOR
#endif // !defined(JRATE_CT_MEMORY_ALLOCATOR)

#if !defined (JRATE_LT_MEMORY_ALLOCATOR)
#   define JRATE_LT_MEMORY_ALLOCATOR          JRATE_MEMORY_MAPPED_ALLOCATOR
#endif // !defined(JRATE_LT_MEMORY_ALLOCATOR)

#if !defined (JRATE_IMMORTAL_MEMORY_ALLOCATOR)
#   define JRATE_IMMORTAL_MEMORY_ALLOCATOR    JRATE_MEMORY_MAPPED_ALLOCATOR
#endif // !defined(JRATE_IMMORTAL_MEMORY_ALLOCATOR)

#if !defined (JRATE_IMMORTAL_MEMORY)
#   define JRATE_IMMORTAL_MEMORY              JRATE_CT_MEMORY
#endif // !defined(JRATE_IMMORTAL_MEMORY)

#if !defined(JRATE_IMMORTAL_MEMORY_SIZE)
#    define JRATE_IMMORTAL_MEMORY_SIZE 32 // MB
#endif // !defined(JRATE_IMMORTAL_MEMORY_SIZE)

#if !defined (JRATE_HEAP_MEMORY_SIZE)
#    define JRATE_HEAP_MEMORY_SIZE 64 // MB
#endif // !defined (JRATE_HEAP_MEMORY_SIZE)

#if !defined (JRATE_METHOD_AREA_MEMORY_SIZE)
#define JRATE_METHOD_AREA_MEMORY_SIZE 32 // MB
#endif // !defined (JRATE_METHOD_AREA_MEMORY_SIZE)

#if !defined (JRATE_SCOPES_ARENA_SIZE)
#define JRATE_SCOPES_ARENA_SIZE 64 // MB
#endif // !defined (JRATE_SCOPES_ARENA_SIZE)


// #if  !defined (JRATE_IMMORTAL_MEMORY_DEFAULT_SIZE)
// #   define JRATE_IMMORTAL_MEMORY_DEFAULT_SIZE  16777216 // 16 MByte
// #endif // !defined(JRATE_IMMORTAL_MEMORY_DEFAULT_SIZE)

// #if  !defined (JRATE_HEAP_MEMORY_DEFAULT_SIZE)
// #define JRATE_HEAP_MEMORY_DEFAULT_SIZE     67108864 // 16 MByte
// #endif // !defined(JRATE_HEAP_MEMORY_DEFAULT_SIZE)

// #if !defined(JRATE_METHOD_MEMORY_DEFAULT_SIZE)
// #define JRATE_METHOD_MEMORY_DEFAULT_SIZE     16777216 // 16 MByte
// #endif // !defined(JRATE_METHOD_MEMORY_DEFAULT_SIZE)

#if !defined(JRATE_DO_FINALIZE)
#   define JRATE_DO_FINALIZE      JRATE_YES
#endif // !defined(JRATE_DO_FINALIZE)

#if !defined(JRATE_MEMLOCK)
#   define JRATE_MEMLOCK   JRATE_NO
#endif // !defined(JRATE_ENSURE_MEMLOCK)


//
// Make sure that all locked memory is actually held in the main
// memory and that the OS does not play tricks.
//
#if !defined(JRATE_ENSURE_MEMLOCK)
#   define JRATE_ENSURE_MEMLOCK   JRATE_NO
#endif // !defined(JRATE_ENSURE_MEMLOCK)

// In some cases the memory can be returned without being zeroed, this
// can be done in the cases in which we know for fure that the object
// will be initialized right away. This way we can save a lot of time.

#if !defined(ALWAYS_ZERO_MEMORY)
#   define ALWAYS_ZERO_MEMORY      JRATE_NO
#endif // !defined(ALWAYS_ZERO_MEMORY)

//
// Set default scheduling policies
//
#if !defined(JRATE_THREAD_SCHED_POLICY)
#   define JRATE_THREAD_SCHED_POLICY JRATE_SCHED_OTHER
#endif // !defined(JRATE_THREAD_SCHED_POLICY)

#if !defined(JRATE_REAL_TIME_THREAD_SCHED_POLICY)
#   define JRATE_REAL_TIME_THREAD_SCHED_POLICY JRATE_SCHED_FIFO
#endif // JRATE_REAL_TIME_THREAD_SCHED_POLICY

#endif // _JRATE_DEFAULTS_H_
