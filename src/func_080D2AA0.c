#include "types.h"

void func_080D2AA0(s32 *p) {
    *p += 0x10000;
    if (*p > 0x40000)
        *p = 0x40000;
}
