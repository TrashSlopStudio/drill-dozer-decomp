#include "types.h"

extern void func_08005560(u32);

void func_08061AC4(u8 *p) {
    u32 *q = (u32 *)(p + 124);
    s32 i = 1;
    do {
        func_08005560(*q++);
    } while (--i >= 0);
}
