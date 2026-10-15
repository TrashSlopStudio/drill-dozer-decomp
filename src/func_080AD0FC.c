#include "types.h"

extern void func_080ABF00(u32, u32);

u32 func_080AD0FC(s32 *p) {
    if (++p[1] > 29) {
        p[1] = 0;
        p[0] = 12;
        func_080ABF00(p[7], 6);
    }
    return 0;
}
