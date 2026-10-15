#include "types.h"

u32 func_080177A0(u8 *p) {
    u32 r = *(u32 *)(p + 0x3F0);
    if (r == 3)
        r = *(u32 *)(p + 0x44C);
    return r;
}
