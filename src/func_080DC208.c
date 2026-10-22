#include "types.h"

extern u8 *func_080685BC(u32);

u32 func_080DC208(s32 *p) {
    if (++p[1] > 29) {
        p[1] = 0;
        p[0] = 12;
        func_080685BC(p[6])[11] = 0;
    }
    return 0;
}
