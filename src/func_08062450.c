#include "types.h"

extern u8 *gUnk_0203603C;

u32 func_08062450(u8 a) {
    if (gUnk_0203603C == 0)
        return 0;
    gUnk_0203603C[5] = a;
    return 1;
}
