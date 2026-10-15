#include "types.h"

u32 func_080AC8AC(s32 *p) {
    if (++p[1] > 30) {
        p[1] = 0;
        p[0] = 17;
    }
    return 0;
}
