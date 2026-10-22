#include "types.h"

extern u32 gUnk_0822F5B4[][2];

u32 func_0801AA20(u8 a) {
    u32 i;
    for (i = 0; i <= 5; i++) {
        if (a == gUnk_0822F5B4[i][0])
            return gUnk_0822F5B4[i][1];
    }
    return 0;
}
