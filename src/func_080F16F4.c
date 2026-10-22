#include "types.h"
extern u32 gUnk_03003A0C;
extern void func_080F05B8(u32, u32);
extern void func_080F14C8(u32, u32);
u32 func_080F16F4(u32 a, u32 b, u32 c, u32 d) {
    gUnk_03003A0C = c;
    func_080F05B8(a, c);
    func_080F14C8(a, d);
    return 1;
}
