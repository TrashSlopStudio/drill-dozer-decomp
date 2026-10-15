#include "types.h"

extern u32 func_0800D8EC(u32, u32);

u32 func_0800D8C4(u32 a, u32 b) {
    u32 k;
    if (b == 2)
        k = 194;
    else if (b == 3)
        k = 195;
    else
        return 0;
    if (func_0800D8EC(a, k) == 1)
        return k;
    return 0;
}
