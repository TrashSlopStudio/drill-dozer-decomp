#include "types.h"

extern u32 gUnk_0823E2A4[][4];

u32 func_080210DC(s32 a, s32 b) {
    if (a == 4)
        a = 2;
    else if (a == 5)
        a = 3;
    if (b > 3)
        b = 0;
    return gUnk_0823E2A4[a][b];
}
