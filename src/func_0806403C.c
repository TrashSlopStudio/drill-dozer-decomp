#include "types.h"

extern u8 *gUnk_02036048;

u32 func_0806403C(void) {
    u8 *p = gUnk_02036048;
    if (p == 0)
        return 1;
    return p[13] != 0;
}
