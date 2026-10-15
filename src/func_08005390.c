#include "types.h"

extern u8 gUnk_02023048[];

void func_08005390(void) {
    u32 i;
    u8 *p;

    for (i = 0, p = gUnk_02023048; i < 128; i++)
        *p++ = i;
}
