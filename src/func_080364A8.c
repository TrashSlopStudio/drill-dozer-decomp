#include "types.h"

void func_080364A8(u8 *p, u16 v) {
    u16 *q = (u16 *)(p + 0x156);
    u32 z = 0;
    *q = v;
    *(u16 *)(p + 0x154) = z;
}
