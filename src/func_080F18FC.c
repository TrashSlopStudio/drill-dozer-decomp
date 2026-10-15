#include "types.h"
extern void func_0802FF64(u32, u32);
extern void func_080F14C8(u8 *, u32);
u32 func_080F18FC(u8 *p, u32 a, u32 b, u32 c) {
    func_0802FF64(*(u32 *)(p + 36), b);
    func_080F14C8(p, c);
    return 1;
}
