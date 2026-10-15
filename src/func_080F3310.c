#include "types.h"

extern void func_0801BF48(u8 *, u32);
extern void func_080F35C4(u8 *, u8 *);

void func_080F3310(u8 *p) {
    u8 *q = p + 0x7C;
    func_0801BF48(p + 0x90, *(u32 *)(q + 8));
    func_080F35C4(p, q);
}
