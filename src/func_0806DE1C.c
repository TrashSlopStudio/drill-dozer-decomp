#include "types.h"

extern u8 *func_0806E11C(u32);

u32 func_0806DE1C(u8 *p) {
    if (func_0806E11C(*(u32 *)(*(u8 **)(p + 904) + 4))[14] == 1)
        return 2;
    return 0;
}
