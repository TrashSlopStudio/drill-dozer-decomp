#include "types.h"

extern void func_0801BF48(u8 *, u32);
extern void func_0801B064(u32);
extern void func_080AEE04(u8 *);

void func_080AD90C(u8 *a) {
    u32 *p = (u32 *)(a + 0x7C);
    func_0801BF48(a + 0x84, p[0]);
    func_0801B064(p[0]);
    func_0801B064(p[1]);
    func_080AEE04(a + 0xA0);
}
