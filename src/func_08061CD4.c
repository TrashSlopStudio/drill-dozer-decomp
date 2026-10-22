#include "types.h"

extern void func_0801BF48(u8 *a, u32 b);
extern void func_0801BF68(u8 *a, u32 b);
extern void func_08061DAC(u8 *a, u8 *b);

void func_08061CD4(u8 *p) {
    u8 *q = p + 0x7C;
    func_0801BF48(p + 0x80, *(u32 *)(p + 0x7C));
    func_0801BF68(p + 0x88, ((u32) * (u8 *)(*(u32 *)(p + 0x7C) + 0x23) << 26) >> 27);
    func_08061DAC(p, q);
}
