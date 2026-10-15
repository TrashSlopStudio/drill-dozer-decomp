#include "types.h"

extern void func_080ABF00(s32, s32);

u32 func_080AD038(s32 *p) {
    if (++p[1] > 7) {
        p[1] = 0;
        p[0] = 8;
        func_080ABF00(p[7], 6);
    }
    return 0;
}
