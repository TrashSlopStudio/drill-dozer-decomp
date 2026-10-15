#include "types.h"

u32 func_080DC0AC(s32 *p) {
    if (++p[1] > 59) {
        p[1] = 0;
        p[0] = 3;
    }
    return 0;
}
