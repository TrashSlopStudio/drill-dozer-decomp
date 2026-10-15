#include "types.h"

void func_08048618(u16 *o, u16 *a, u16 *b) {
    o[2] = a[0] + b[2];
    o[3] = a[0] + b[3];
    o[0] = a[1] + b[0];
    o[1] = a[1] + b[1];
}
