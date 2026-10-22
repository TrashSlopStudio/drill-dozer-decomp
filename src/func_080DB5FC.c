#include "types.h"

extern u32 gUnk_08488E50[];

void func_080DB5FC(u8 *a) {
    u8 *b = a + 0x7c;
    while (((s32(*)(u8 *, u8 *))gUnk_08488E50[*(u32 *)(b + 16)])(a, b) == 1)
        ;
}
