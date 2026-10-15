#include "types.h"

void func_08020D08(u8 *p) {
    *(*(u8 **)(p + 0x2AC) + 0x21) |= 3;
    *(s8 *)(*(u8 **)(p + 0x2AC) + 0x23) &= ~0x3E;
}
