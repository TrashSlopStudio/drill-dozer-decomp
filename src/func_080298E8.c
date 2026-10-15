#include "types.h"

u32 func_080298E8(u8 *p) {
    *(u32 *)(p + 0x5C) = 0xFFFA0000;
    *(u16 *)(p + 0x60) = 0;
    p[0x76] = 2;
    return 0;
}
