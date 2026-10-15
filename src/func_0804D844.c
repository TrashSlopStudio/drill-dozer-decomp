#include "types.h"

extern void func_0804DF48(u8 *);
extern void func_0804E130(u8 *, u8 *, u16);
extern void func_0804E19C(u8 *, u8 *, u16);

void func_0804D844(s32 a, u8 *p) {
    u8 *q = p + 0x7C;
    func_0804DF48(p);
    func_0804E130(p, p + 0x9C, *(u16 *)(q + 0x24));
    func_0804E19C(p, q, *(u16 *)(q + 0x24));
}
