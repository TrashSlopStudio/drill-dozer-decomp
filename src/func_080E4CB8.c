#include "types.h"

extern u8 **gUnk_020391F0;

void func_080E4CB8(u32 a) {
    if (gUnk_020391F0 != 0)
        gUnk_020391F0[1][1] = a;
}
