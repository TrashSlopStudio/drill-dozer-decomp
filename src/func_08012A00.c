#include "types.h"

extern u8 gUnk_08227320[];

u32 func_08012A00(s32 a) {
    u8 *p;
    u32 r;
    if (a > 0x10F) {
        return 0;
    }
    p = gUnk_08227320;
    r = p[a * 12 + 10];
    if ((r << 31) != 0) {
        return 1;
    }
    return 0;
}
