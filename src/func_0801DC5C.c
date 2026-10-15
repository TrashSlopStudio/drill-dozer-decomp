#include "types.h"

extern void func_08005560(u32);

void func_0801DC5C(u8 *p) {
    u32 *q = (u32 *)(p + 28);
    s32 i = 5;
    do {
        func_08005560(*q++);
    } while (--i >= 0);
}
