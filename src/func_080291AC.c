#include "types.h"

u32 func_080291AC(u8 *a, u8 *b) {
    u16 x = *(u16 *)(a + 0x26);
    *(u16 *)(b + 0x14) = x - 9;
    *(u16 *)(b + 0x16) = x + 96;
    *(u16 *)(b + 0x18) = *(u16 *)(a + 0x24) - 90;
    *(u16 *)(b + 0x1A) = *(u16 *)(a + 0x42) + 1;
    return 1;
}
