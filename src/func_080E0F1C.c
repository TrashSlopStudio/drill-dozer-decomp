#include "types.h"

void func_080E0F1C(u32 a, u8 *p, u32 c) {
    u8 *q = p;
    u8 *r = q + 0x48;
    if (c != *r) {
        u32 z = 0;
        *r = c;
        q[0x49] = z;
    }
}
