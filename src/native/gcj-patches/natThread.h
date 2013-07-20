#ifndef GCJ_NAT_THREAD_H_
#define GCJ_NAT_THREAD_H_

#include <jvm.h>
#include <jni.h>

// This structure is used to represent all the data the native side
// needs.  An object of this type is assigned to the `data' member of
// the Thread class.
struct natThread
{
  // These are used to interrupt sleep and join calls.  We can share a
  // condition variable here since it only ever gets notified when the thread
  // exits.
  _Jv_Mutex_t join_mutex;
  _Jv_ConditionVariable_t join_cond;

  // This is private data for the thread system layer.
  _Jv_Thread_t *thread;

  // Each thread has its own JNI object.
  JNIEnv *jni_env;
};


#endif // GCJ_NAT_THREAD_H_
