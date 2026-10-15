#include "types.h"

extern void func_080BF48C(s32 *, u32);

u32 func_080BFAE4(s32 *p) {
    if (++p[6] > 29) {
        p[6] = 0;
        p[0] = 23;
        func_080BF48C(p, 11);
    }
    return 0;
}
