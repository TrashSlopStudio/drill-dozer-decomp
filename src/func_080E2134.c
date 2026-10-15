#include "types.h"

u32 func_080E2134(u8 *p) {
    u8 *q = *(u8 **)(p + 4) + 124;
    if (p[21] == 0 && q[14] == 1)
        return 1;
    return 0;
}
