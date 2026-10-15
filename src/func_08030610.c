#include "types.h"

void func_08030610(u8 *p, u16 a, u16 b) {
    *(u16 *)(p + 0x148) = a;
    *(u16 *)(p + 0x14A) = b;
}
