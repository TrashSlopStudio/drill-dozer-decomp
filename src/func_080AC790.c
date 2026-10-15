#include "types.h"

extern void func_080ABF00(u32, u32);

u32 func_080AC790(s32 *p) {
    if (++p[1] > 29) {
        p[1] = 0;
        p[0] = 13;
        func_080ABF00((u32)p[11], 3);
    }
    return 0;
}
