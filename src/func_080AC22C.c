#include "types.h"

extern void func_080ABF00(s32, s32);

u32 func_080AC22C(s32 *p) {
    if (++p[1] > 14) {
        p[1] = 0;
        p[0] = 7;
        func_080ABF00(p[6], 1);
    }
    return 0;
}
