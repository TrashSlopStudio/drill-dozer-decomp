#include "types.h"

u32 func_0801C0C8(u8 *a) {
    u8 *p = *(u8 **)(a + 8);
    if (p == 0 || !(p[10] & 1))
        return 0;
    return 1;
}
