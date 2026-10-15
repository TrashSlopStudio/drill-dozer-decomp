#include "types.h"
void func_08083E18(u32 a, u8 *b) {
    s32 i;
    u8 **p = (u8 **)(b + 0x44);
    for (i = 0; i < 11; i++) {
        if (p[i])
            *(u16 *)(p[i] + 0x1c) &= 0xfffb;
    }
}
