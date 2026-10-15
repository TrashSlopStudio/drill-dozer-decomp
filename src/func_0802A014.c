#include "types.h"
extern s32 gUnk_03006BE0[];
u32 func_0802A014(void) {
    s32 v = gUnk_03006BE0[1];
    if (v >= 0 && (v & 0xFFFF) != 0)
        return 1;
    return 0;
}
