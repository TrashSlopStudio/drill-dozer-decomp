#include "types.h"
extern u8 *gUnk_0203603C;
u32 func_08062470(u8 a) {
    s8 b = a;
    if (gUnk_0203603C == 0)
        return 0;
    if (a == 0)
        gUnk_0203603C[4] = b;
    return 1;
}
