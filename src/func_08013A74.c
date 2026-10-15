#include "types.h"

u32 func_08013A74(s16 a, s16 b, s16 c) {
    u32 r = 0;
    if (b >= a + c)
        r = 1;
    return r;
}
