#include "types.h"

extern u8 *gUnk_0821DEF4[];

u8 *func_080092CC(u32 a) {
    u8 *p = gUnk_0821DEF4[a];
    if (p == 0)
        return 0;
    return p + 28;
}
