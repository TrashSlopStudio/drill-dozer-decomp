#include "types.h"

u32 func_08070B04(u8 *p) {
    if (--p[0x73] == 0)
        p[0x76] = 2;
    return 1;
}
