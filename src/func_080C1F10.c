#include "types.h"

u32 func_080C1F10(u8 *p) {
    if ((*(u8 **)(p + 0x7C))[14] == 1)
        return 1;
    return 0;
}
