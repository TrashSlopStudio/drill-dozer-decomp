#include "types.h"

void func_0801BF48(u8 *, u32);
void func_080D7108(u8 *, u8 *);
void func_0802A0B0(u32);

void func_080D69C0(u8 *p) {
    u8 *q = p + 0x7C;
    func_0801BF48(p + 0xB0, *(u32 *)(p + 0x7C));
    func_080D7108(p, q);
    func_0802A0B0(0x13C);
}
