#include "types.h"

u32 func_08030E7C(u8 *p) {
    if ((*(u8 **)(p + 0x2AC))[14] == 1)
        return 1;
    return 0;
}
