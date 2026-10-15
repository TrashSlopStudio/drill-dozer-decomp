#include "types.h"
u32 func_08013ABC(s16 a, s16 b, s16 c) {
    u32 r = 0;
    if (b >= a / 2 + c)
        r = 1;
    return r;
}
