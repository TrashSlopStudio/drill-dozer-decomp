#include "types.h"

extern s32 gUnk_03006B50[];

u32 func_08029FEC(void) {
    s32 v = gUnk_03006B50[1];
    if (v >= 0 && (v & 0xFFFF) != 0)
        return 1;
    return 0;
}
