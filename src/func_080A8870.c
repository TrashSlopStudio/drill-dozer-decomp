#include "types.h"

extern void func_0801B064(u32);

void func_080A8870(u32 a, u8 *b) {
    u32 *p = (u32 *)(b + 52);
    s32 i = 7;
    do {
        if (*p != 0)
            func_0801B064(*p);
        p++;
    } while (--i >= 0);
}
