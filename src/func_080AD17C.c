#include "types.h"

u32 func_080AD17C(s32 *p) {
    if (++p[1] > 3) {
        p[1] = 0;
        p[0] = 15;
    }
    return 0;
}
