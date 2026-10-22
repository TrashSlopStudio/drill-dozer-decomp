#include "types.h"

extern u16 gUnk_02020D80;
extern u32 gUnk_02020B40[];

u32 func_080007F0(u32 a) {
    u32 r;
    if (gUnk_02020D80 != 0) {
        gUnk_02020D80--;
        gUnk_02020B40[gUnk_02020D80] = a;
        r = 1;
    } else {
        r = 0;
    }
    return r;
}
