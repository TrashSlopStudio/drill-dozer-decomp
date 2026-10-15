#include "types.h"

u32 func_080E9150(s32 *p) {
    if (++p[1] > 14) {
        p[1] = 0;
        p[0]++;
    }
    return 0;
}
