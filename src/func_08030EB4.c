#include "types.h"

u32 func_08030EB4(u8 *p) {
    if ((*(u8 **)(p + 0x2B4))[14] == 1)
        return 1;
    return 0;
}
