#include "types.h"

extern u8 *func_0801AF20(u32, u32);
extern u8 gUnk_083FE5A4[];
extern void func_080A65DC(u32);

void func_080A65B4(u32 a, u32 *b) {
    u8 *p = func_0801AF20(a, 10);
    b[1] = (u32)p;
    *(u32 *)(p + 40) = (u32)gUnk_083FE5A4;
    p[3] = 158;
    func_080A65DC(a);
}
