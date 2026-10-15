#include "types.h"

extern void func_080E5894(u8 *);

void func_080E5958(u8 *a) {
    u8 *p = a + 0x4020;
    s32 i = 19;
    do {
        func_080E5894(p);
        p += 8;
    } while (--i >= 0);
}
