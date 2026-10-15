#include "types.h"

extern void func_08010E20(u32);
extern void func_080F14C8(u8 *, u32);

u32 func_080F15E0(u8 *p, u32 b, u32 c, u32 d) {
    func_08010E20(*(u32 *)(p + 36));
    func_080F14C8(p, d);
    return 1;
}
