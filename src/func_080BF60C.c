#include "types.h"

extern void func_08029E54(u32);
extern void func_080BF48C(s32 *, u32);

u32 func_080BF60C(s32 *p) {
    if (++p[6] > 29) {
        p[6] = 0;
        p[0] = 7;
        func_08029E54(254);
        func_080BF48C(p, 0);
    }
    return 0;
}
