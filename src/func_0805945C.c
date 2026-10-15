#include "types.h"

u32 func_0805945C(u8 *a, u8 *b) {
    u8 *p = *(u8 **)(b + 8);
    if (p[14] == 1) {
        p[1] = 1;
        a[0x76] = 4;
    }
    return 1;
}
