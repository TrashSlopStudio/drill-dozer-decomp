#include "types.h"

s16 func_08072CFC(s32 max, s32 a, s32 b) {
    s32 d = b - a;
    s32 ad = d;
    if (d < 0)
        ad = -d;
    if (ad > max) {
        if (b > a)
            return max;
        return -max;
    }
    return d;
}
