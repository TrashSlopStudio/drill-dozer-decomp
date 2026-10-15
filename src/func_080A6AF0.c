#include "types.h"

extern void func_0801174C(u32, u16 *, u16 *);

void func_080A6AF0(u8 *a) {
    u8 *q = a + 0x7C;
    u16 x, y;
    func_0801174C(*(u32 *)(a + 12), &x, &y);
    *(u16 *)(q + 16) = y;
}
