#include "types.h"

extern void func_0801BF48(u8 *, u32);
extern void func_080F3C10(u8 *, u8 *);

void func_080F3A4C(u8 *p) {
    u8 *q = p + 0x7C;
    func_0801BF48(p + 0x88, *(u32 *)(q + 4));
    func_080F3C10(p, q);
}
