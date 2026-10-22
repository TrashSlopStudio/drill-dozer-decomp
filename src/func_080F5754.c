#include "types.h"

void func_080F5754(u8 *base, u32 val) {
    u32 *p = (u32 *)(base + 0x4050);
    u8 *q = base + 0x4045;
    int i;
    for (i = 19; i >= 0; i--) {
        if (*q != 0) {
            ((u8 *)*p)[1] = val;
        }
        p += 4;
        q += 16;
    }
}
