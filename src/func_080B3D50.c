#include "types.h"

void func_080B3D50(u8 *p, u8 *q, u8 c) {
    u8 *t = p + 0x76;
    u32 z = 0;
    *t = c;
    p[0x73] = z;
    q[14] = z;
}
