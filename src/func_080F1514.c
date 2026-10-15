#include "types.h"

extern void func_0800B260(u32, u16);
extern void func_080F14C8(u8 *, u32);

u32 func_080F1514(u8 *p, u32 unused, u32 a, u32 b) {
    func_0800B260(*(u32 *)(p + 36), a);
    func_080F14C8(p, b);
    return 1;
}
