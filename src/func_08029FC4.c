#include "types.h"
extern s32 gUnk_03006AD0[];
u32 func_08029FC4(void) {
    s32 v = gUnk_03006AD0[1];
    if (v >= 0 && (v & 0xFFFF))
        return 1;
    return 0;
}
