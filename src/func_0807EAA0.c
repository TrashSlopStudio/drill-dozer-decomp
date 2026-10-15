#include "types.h"

extern u32 func_0807EA20(u8 *p);

u32 func_0807EAA0(u8 *p) {
    u32 r = func_0807EA20(p);
    p[1] = 0;
    if (r == 0)
        p[1] = 1;
    return r;
}
