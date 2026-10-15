#include "types.h"

void func_080A5850(u8 *a) {
    s32 i;
    u8 **p;
    u8 v;

    if (a[0xB4] & 0x80) {
        v = 1;
        p = (u8 **)(a + 0x84);
        i = 1;
        do {
            (*p++)[1] = v;
        } while (--i >= 0);
    }
}
