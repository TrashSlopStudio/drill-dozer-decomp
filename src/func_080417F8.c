#include "types.h"

extern void func_0801AEF0(u32 a, u32 b);

void func_080417F8(u8 *p) {
    u32 *q = (u32 *)(p + 0x7c);
    func_0801AEF0((u32)p, *(u32 *)(p + 0x7c));
    func_0801AEF0((u32)p, q[1]);
    *(u16 *)(q[1] + 0x16) += 8;
    *(u16 *)(*(u32 *)(p + 0x7c) + 0x16) += 0x28;
}
