#include "types.h"

extern u32 gUnk_03003A08;
extern void func_080F0568(u32, u32);
extern void func_080F14C8(u32, u32);

u32 func_080F16A8(u32 a, u32 b, u32 c, u32 d) {
    gUnk_03003A08 = c;
    func_080F0568(a, c);
    func_080F14C8(a, d);
    return 1;
}
