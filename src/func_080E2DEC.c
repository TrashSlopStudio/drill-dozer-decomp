#include "types.h"

extern s32 func_080ABF30(u32);
extern void func_0802140C(u32, u32);

u32 func_080E2DEC(u32 *p) {
    if (func_080ABF30(p[8]) > 10) {
        p[0] = 9;
        func_0802140C(p[7], 0x7C);
    }
    return 0;
}
