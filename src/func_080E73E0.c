#include "types.h"

void func_080E73E0(u8 *p) {
    s32 *q = (s32 *)(p + 0x7C);
    if (--*q < 0)
        *q = 0;
}
