#include "types.h"

extern void func_080057F0(u32, u32, u32);

u32 func_0803FFC4(u32 a, u32 *p, u32 c) {
    p[12] = 0;
    p[13] = 1;
    p[0] = 12;
    func_080057F0(c, 0, 0);
    return 1;
}
