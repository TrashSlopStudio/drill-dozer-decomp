#include "types.h"

void func_080D2A1C(u8 *a, u8 *b) {
    if (*(s8 *)(a + 0x54) == 2)
        b[11] = 0;
    else
        b[11] = 1;
}
