#include "types.h"

extern u32 func_080F066C(u8 *, u32, u32);
extern void func_080F14C8(u8 *, u32);

u32 func_080F1738(u8 *p, u32 a, u32 b, u32 c) {
    if (func_080F066C(p, a, b) == 0) {
        return 0;
    }
    func_080F14C8(p, c);
    return 1;
}
