#include "types.h"

extern u8 *gUnk_083627F8[];
extern void func_080F8FB8(u32, u32);

u32 func_08073888(u32 a) {
    u32 i;
    u8 **p;

    for (i = 0, p = gUnk_083627F8; i < 22; i++) {
        func_080F8FB8(a, *(u32 *)(*p++ + 16));
    }
    return 1;
}
