#include "types.h"

u32 func_0801BBE4(u8 *p) {
    if ((p[0x70] & 1) && *(s16 *)(p + 0x56) > 0)
        return 1;
    return 0;
}
