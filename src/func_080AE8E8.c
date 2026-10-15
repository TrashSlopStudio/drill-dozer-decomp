#include "types.h"

extern u32 func_0801B2C4(u8 *, u32, u32, s16, s16);

void func_080AE8E8(u8 *p) {
    u8 *q = p + 0x7C;
    *(u32 *)(q + 0x58) = func_0801B2C4(p, 216, 0, *(s16 *)(p + 0x24), *(s16 *)(p + 0x26));
}
