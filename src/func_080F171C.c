#include "types.h"

extern void func_080F063C(u8 *, u32, u32);
extern void func_080F14C8(u8 *, u32);

u32 func_080F171C(u8 *p, u32 a, u32 b, u32 c) {
    func_080F063C(p, a, b);
    func_080F14C8(p, c);
    return 1;
}
