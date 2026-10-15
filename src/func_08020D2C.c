#include "types.h"

struct S {
    u8 pad[0x23];
    u8 a : 1;
    u8 f : 5;
};

void func_08020D2C(u8 *p) {
    u8 **pp = (u8 **)(p + 0x2B0);
    (*pp)[33] |= 3;
    ((struct S *)*pp)->f = 1;
}
