#include "types.h"

extern s16 gUnk_02034A3E[];

s32 func_08012588(u8 i) {
    if (i == 0xFF)
        return 0;
    return gUnk_02034A3E[i];
}
