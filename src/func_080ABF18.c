#include "types.h"

u32 func_080ABF18(u8 *p) {
    p += 0x7C;
    if ((*(u8 **)(p + 0x14))[14] == 1)
        return 1;
    return 0;
}
