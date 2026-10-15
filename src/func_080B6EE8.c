#include "types.h"

extern u32 gUnk_020391A0;

u32 func_080B6EE8(void) {
    u32 r;
    switch (gUnk_020391A0) {
    case 0:
    case 1:
    case 2:
        r = 327;
        break;
    case 3:
        r = 364;
        break;
    default:
        r = 358;
        break;
    }
    return r;
}
