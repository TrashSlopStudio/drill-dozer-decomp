#include "types.h"

void func_08028048(s32 *p) {
    *p += 0x8000;
    if (*p > 0x60000)
        *p = 0x60000;
}
