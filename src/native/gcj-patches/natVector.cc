#include <java/util/Vector.h>

void
::java::util::Vector::natSetElement(jint index, java::lang::Object *obj) {
  (::elements(elementData))[index] = obj;
}
