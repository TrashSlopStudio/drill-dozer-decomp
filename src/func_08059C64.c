#include "types.h"

extern void func_0801B064(u32);

void func_08059C64(u32 a, u32 *p) {
    s32 i;
    u32 z;
    u32 *q;

    if (*p != 0) {
        z = 0;
        q = p;
        i = 3;
        do {
            func_0801B064(*q);
            *q++ = z;
        } while (--i >= 0);
    }
}
