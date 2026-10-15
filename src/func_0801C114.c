#include "types.h"

s32 func_0801C114(u8 *a) {
    s16 *p = *(s16 **)(a + 8);
    if (p == 0)
        return 0;
    return *p;
}
