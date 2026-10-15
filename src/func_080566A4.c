#include "types.h"

s32 func_080566A4(s32 a) {
    if (a < 0)
        a = -a;
    if (a > 4)
        a = 4;
    else if (a == 0)
        a = 1;
    return a;
}
