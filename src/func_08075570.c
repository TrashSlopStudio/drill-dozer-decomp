#include "types.h"

u32 func_08075570(s32 a, s32 b) {
    if (a < 0)
        a = -a;
    if (b < 0)
        b = -b;
    if (a > b)
        return 0;
    return 1;
}
