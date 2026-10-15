#include "types.h"

extern void func_080057F0(u32, u32, u32);

void func_0809D788(u8 *p, u32 v) {
    func_080057F0(*(u32 *)(p + 8), 0, 0);
    p[20] = v;
    p[23] = 1;
}
