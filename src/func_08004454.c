#include "types.h"
extern u32 func_080F8FB8(void *, u32);
extern u32 *gUnk_03005380;
u32 func_08004454(u8 *p) {
    u32 r;
    do {
        r = (u16)func_080F8FB8(p, *(u32 *)((u8 *)gUnk_03005380 + p[5] * 12));
    } while (r == 2);
    return r;
}
