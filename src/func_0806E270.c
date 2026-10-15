#include "types.h"

extern void func_0801B064(u32);

void func_0806E270(u8 *p) {
    u32 *q = (u32 *)(p + 0x7C);
    s32 i = 3;
    do {
        func_0801B064(*q++);
    } while (--i >= 0);
}
