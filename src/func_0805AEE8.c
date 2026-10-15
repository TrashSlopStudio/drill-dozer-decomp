#include "types.h"

void func_0805AEE8(u32 a, u8 *p) {
    if (p[1] == 0xFE)
        p[1] = 0xFF;
    else
        p[1] = 0xFE;
}
