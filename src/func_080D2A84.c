#include "types.h"

void func_080D2A84(s32 *p) {
    *p += 0x10000;
    if (*p > 0x60000)
        *p = 0x60000;
}
