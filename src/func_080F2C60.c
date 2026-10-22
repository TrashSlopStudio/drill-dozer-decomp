#include "types.h"

extern void func_0801BF48(u8 *, u32);
extern void func_080F2F44(u8 *, u8 *);

void func_080F2C60(u8 *p) {
    u8 *q = p + 0x7c;
    func_0801BF48(p + 0x9c, *(u32 *)(q + 8));
    func_0801BF48(p + 0xa4, *(u32 *)(q + 12));
    func_080F2F44(p, q);
}
