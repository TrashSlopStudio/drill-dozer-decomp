#include "types.h"

extern u8 *func_0801B3A8(u8 *, u32, u32);

void func_080D20AC(u8 *p) {
    u8 *r = func_0801B3A8(p, 6, 24);
    *(u8 **)(p + 124) = r;
    r[3] = 50;
}
