#include "types.h"

extern u16 gUnk_082211FC[];

void func_08009240(u16 *d) {
    s32 i;
    for (i = 0; i < 4; i++) {
        d[i] = gUnk_082211FC[i] | 0x8000;
    }
}
