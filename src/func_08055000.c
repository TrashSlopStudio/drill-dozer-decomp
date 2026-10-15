#include "types.h"

void func_08055000(u32 a, u8 *p, u32 v) {
    u8 *q;
    s32 i;
    q = *(u8 **)(p + 100);
    i = 10;
    q += 54;
    do {
        *q = v;
        q--;
    } while (--i >= 0);
}
