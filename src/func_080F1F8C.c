#include "types.h"

extern u32 func_0801B4B4(u8 *, u32, u32);
extern void func_08011810(u32, u32);

u32 func_080F1F8C(u8 *p, u32 a) {
    u32 r = func_0801B4B4(p, a, 0);
    func_08011810(*(u32 *)(p + 12), 8);
    return r;
}
