#include "types.h"

extern void func_0803DAFC(u32, u32);

u32 func_080BF8F8(u32 *p) {
    if ((int)++p[6] > 29) {
        p[6] = 0;
        func_0803DAFC(p[30], 1);
        p[0] = 14;
    }
    return 0;
}
