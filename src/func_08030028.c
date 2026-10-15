#include "types.h"

s32 func_08030028(u8 *p) {
    s32 v = *(s32 *)(p + 388);
    if (v < 0)
        return 0;
    if (v > 0)
        return 1;
    return -1;
}
