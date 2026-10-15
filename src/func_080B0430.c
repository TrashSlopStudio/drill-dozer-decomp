#include "types.h"

u32 func_080B0430(u8 *p) {
    u32 v = *(u32 *)(p + 0x2C);
    if (v != 8 && v != 10 && v != 11)
        return 1;
    return 0;
}
