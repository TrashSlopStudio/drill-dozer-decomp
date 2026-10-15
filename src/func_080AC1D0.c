#include "types.h"

u32 func_080AC1D0(s32 *p) {
    if (++p[1] > 29) {
        p[1] = 0;
        p[0] = 5;
    }
    return 0;
}
