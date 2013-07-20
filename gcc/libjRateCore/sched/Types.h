#ifndef _JRATE_SCHED_TYPES_H_
#define _JRATE_SCHED_TYPES_H_

#include "jrate/sched/Config.h"
#include "jrate/sched/Thread.h"
#include "jrate/sched/PriorityParameters.h"
#include "jrate/sched/PriorityScheduler.h"

namespace jrate {
    namespace sched {
        typedef ::jrate::sched::PriorityScheduler<
            ::jrate::sched::PriorityParameters,
            JRATE_SCHEDULER_FIFO>
        Scheduler_t;
         
    }
}

#endif // _JRATE_SCHED_TYPES_H_
