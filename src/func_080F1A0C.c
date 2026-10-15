#include "types.h"

extern void func_08030190(u32, s16, s16);
extern void func_080F14C8(u8 *, u32);

u32 func_080F1A0C(u8 *a, u32 b, s16 *c, u32 d) {
    func_08030190(*(u32 *)(a + 0x24), c[0], c[1]);
    func_080F14C8(a, d);
    return 1;
}
