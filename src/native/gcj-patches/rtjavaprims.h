#ifndef __RTJAVAPRIMS_H__
#define __RTJAVAPRIMS_H__

extern "Java"
{
  namespace javax
  {
    namespace realtime
    {
      class RealtimeThread;
      class ExecutionEligibilityParameters;
      class HeapMemory;
      class ImmortalMemory;
      class CTMemory;
      class LTMemory;
      class VTMemory;
      class MemoryArea;
    };
  };
};

extern "C++" {
   namespace jrate {
      namespace binding {
         namespace java {
             template <typename MemoryArea> class ObjectInitializer;
         };
      };
   };
};

#endif // __RTJAVAPRIMS_H__
