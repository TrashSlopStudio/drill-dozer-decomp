#include "types.h"

u32 func_08030E98(u8 *p) {
    if ((*(u8 **)(p + 0x2B0))[14] == 1)
        return 1;
    return 0;
}
