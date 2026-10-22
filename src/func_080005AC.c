#include "types.h"

extern u8 gUnk_03004B30[];
extern vu16 gUnk_03007FF8;
extern void func_080F8FB4(u32);

void func_080005AC(void) {
    u8 *p = gUnk_03004B30;
    u32 v = *(u32 *)(p + 4);
    u16 a, b;
    if (v != 0) {
        func_080F8FB4(v);
    }
    gUnk_03007FF8 |= 2;
    a = *(vu16 *)(p + 24);
    b = *(vu16 *)(p + 24);
    *(vu16 *)(p + 24) = a | 2;
}
