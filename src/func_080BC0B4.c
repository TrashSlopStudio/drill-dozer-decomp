#include "types.h"

u32 func_080BC0B4(u8 *p) {
    u8 *q = *(u8 **)(p + 4);
    u32 r;
    if (*(s16 *)(q + 22) - *(s16 *)(p + 18) <= 31) {
        *(s16 *)(q + 22) += 4;
        r = 0;
    } else {
        r = 1;
        q[1] = r;
    }
    return r;
}
