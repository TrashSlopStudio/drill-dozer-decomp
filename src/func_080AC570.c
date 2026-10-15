#include "types.h"

u32 func_080AC570(s32 *p) {
    if (++p[1] > 30) {
        p[1] = 0;
        p[0] = 5;
    }
    return 0;
}
