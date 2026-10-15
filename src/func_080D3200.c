#include "types.h"

extern u32 gUnk_0847321C[];

u32 func_080D3200(u8 a) {
    if (a > 18)
        a = 0;
    return gUnk_0847321C[a];
}
