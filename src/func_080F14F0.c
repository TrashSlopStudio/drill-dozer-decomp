#include "types.h"

extern void func_0800B254(u32, u16);
extern void func_080F14C8(u8 *, u32);

u32 func_080F14F0(u8 *p, u32 a, u32 b, u32 c) {
    func_0800B254(*(u32 *)(p + 0x24), (u16)b);
    func_080F14C8(p, c);
    return 1;
}
