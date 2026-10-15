#include "types.h"

extern void func_080911F0(u8 *, u8 *);
extern void func_08091270(u8 *, u8 *);

void func_0809133C(u8 *p) {
    u8 *q = p + 0x7C;
    func_080911F0(p, q);
    func_08091270(p, q);
    *(u32 *)(q + 8) = *(u32 *)(q + 4);
}
