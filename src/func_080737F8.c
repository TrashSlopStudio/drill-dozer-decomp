#include "types.h"

extern u32 *gUnk_083627F8[];
extern void func_080F8FB8(u32, u32);

u32 func_080737F8(u32 a) {
    u32 i;
    u32 **p;

    for (i = 0, p = gUnk_083627F8; i < 22; i++)
        func_080F8FB8(a, **p++);
    return 1;
}
