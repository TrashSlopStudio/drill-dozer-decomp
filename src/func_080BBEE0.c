#include "types.h"

void func_080BBEE0(u8 *p, u32 a, u16 b) {
    u8 *q = p + 46;
    *q = 1;
    *(u32 *)(p + 40) = a + 100;
    *(u16 *)(p + 44) = b;
}
