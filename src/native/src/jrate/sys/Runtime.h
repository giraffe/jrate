// ************************************************************************
//    $Id: Runtime.h 429 2004-09-15 20:32:02Z corsaro $
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
#ifndef _JRATE_SYS_RUNTIME_H_
#define _JRATE_SYS_RUNTIME_H_

#include <jrate/Config.h>
#include <jrate/mem/IMemoryArea.h>
#include <jrate/utils/Units.h>
// The jRate Runtime gives access to the several available memory
// subsystems to the scheduler, and other services that might need to
// be configured or accessed at runtime.

namespace jrate { namespace sys {

class Memory;
class Scheduler;

template <typename T> T& getTSS();

template <typename IMemoryArea>
class Runtime {
public:
    enum {
        HEAP_SIZE = jrate::utils::MegaBytes<JRATE_HEAP_MEMORY_SIZE>::value
    };
    enum {
        METHOD_AREA_SIZE = jrate::utils::MegaBytes<JRATE_METHOD_AREA_MEMORY_SIZE>::value
    };
    enum {
        IMMORTAL_MEMORY_SIZE = jrate::utils::MegaBytes<JRATE_IMMORTAL_MEMORY_SIZE>::value
    };

    enum {
        SCOPES_ARENA_SIZE = jrate::utils::MegaBytes<JRATE_SCOPES_ARENA_SIZE>::value
    };

public:
    static Runtime* init(int argc, char** argv);
    static void finit();
    inline static Runtime* instance() { return theRuntime_; }

public:
    inline IMemoryArea*& heap() { return heap_; }
    inline IMemoryArea*& methodArea() { return methodArea_; }
    inline IMemoryArea*& immortalMemory() {return immortalMemory_; }

private:
    Runtime(int argc, char** argv);
    ~Runtime();

private:
    IMemoryArea* heap_;
    IMemoryArea* methodArea_;
    IMemoryArea* immortalMemory_;

    static Runtime* theRuntime_;
};

}/* jrate */ } /* sys */

#endif // _JRATE_SYS_RUNTIME_H_
