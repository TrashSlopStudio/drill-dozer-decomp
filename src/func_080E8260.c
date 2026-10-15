#include "types.h"

extern u8 gUnk_084C7A80[];
extern void func_0807E4B4(u32);
extern void func_08005814(u8 *, u8 *);

void func_080E8260(u32 a, u8 **b) {
    u8 *p = *b;
    if (p[14] == 1)
        func_0807E4B4(a);
    else
        func_08005814(p, gUnk_084C7A80);
}
