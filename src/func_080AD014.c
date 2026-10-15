#include "types.h"

extern void func_080ABF00(u32, u32);

u32 func_080AD014(s32 *p) {
    if (++p[1] > 14) {
        p[1] = 0;
        p[0] = 7;
        func_080ABF00(p[7], 8);
    }
    return 0;
}
