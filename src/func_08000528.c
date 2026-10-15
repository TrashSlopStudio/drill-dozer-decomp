#include "types.h"

extern u32 gUnk_03004AF0[];

u32 *func_08000528(u32 a) {
    if (a > 13)
        return 0;
    return &gUnk_03004AF0[a];
}
