#include <java/lang/Object.h>
#include <java/util/IdentityHashMap.h>

void
::java::util::IdentityHashMap::setKey(jint index, java::lang::Object *key) {
  (elements(table))[index] = key;
}
