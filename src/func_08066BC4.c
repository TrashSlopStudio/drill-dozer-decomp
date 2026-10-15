#include "types.h"

void func_08066BC4(u8 *p, u8 v) {
    u8 *q = p + 0x4014;
    u32 z = 0;
    *q = v;
    p[0x4015] = 1;
    p[0x4016] = z;
}
