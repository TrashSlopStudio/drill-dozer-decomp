#include "types.h"
extern u32 func_080213D4(u32);
extern void func_0802140C(u32, u32);
int func_080E2D8C(u32 *p) {
    u32 *q;
    if ((u8)func_080213D4(p[7]) == 1) {
        p[0] = 7;
        q = (u32 *)p[8];
        q[8] = q[9];
        func_0802140C(p[7], 123);
    }
    return 0;
}
