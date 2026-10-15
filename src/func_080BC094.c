#include "types.h"

u32 func_080BC094(u8 *p) {
    u32 r = 0;
    if (*(u16 *)(p + 0x20) == 0)
        r = 1;
    return r;
}
