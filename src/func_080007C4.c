#include "types.h"

extern u16 gUnk_02020D80;
extern u32 gUnk_02020B40[];

u32 func_080007C4(void) {
    u32 r;
    if (gUnk_02020D80 == 144)
        return 0;
    r = gUnk_02020B40[gUnk_02020D80];
    gUnk_02020D80++;
    return r;
}
