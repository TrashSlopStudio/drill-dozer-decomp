#include "types.h"

u32 func_080AC2D0(s32 *p) {
    if (++p[1] > 14) {
        p[1] = 0;
        p[0] = 11;
        return 0;
    }
    return 0;
}
