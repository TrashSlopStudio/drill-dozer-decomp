#include "types.h"

extern void func_08021488(u32, u16, u16);
extern void func_080F14C8(u8 *, u32);

s32 func_080F19A8(u8 *p, u32 b, u32 a, u32 c) {
    u16 lo = a;
    u16 hi = a >> 16;
    func_08021488(*(u32 *)(p + 0x24), lo, hi);
    func_080F14C8(p, c);
    return 1;
}
