#include "types.h"

u32 func_08058228(u8 *p, u8 *q) {
    *(u32 *)(p + 0x4C) = 0;
    *(u32 *)(p + 0x50) = 0;
    p[0x76] = 13;
    p[0x73] = 5;
    q[9] = 0;
    return 1;
}
