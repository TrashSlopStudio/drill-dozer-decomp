#include "types.h"

extern void func_080ABF00(u32, u32);

u32 func_080AC514(s32 *p) {
    if (++p[1] > 30) {
        p[1] = 0;
        p[0] = 3;
        func_080ABF00((u32)p[11], 7);
    }
    return 0;
}
