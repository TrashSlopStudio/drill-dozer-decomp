#include "types.h"

extern void func_080057F0(u32, u32, u32);

u32 func_080A620C(u32 a, u8 *p, u32 b) {
    if (a == *p)
        return 0;
    func_080057F0(b, 0, 0);
    *p = a;
    return 1;
}
