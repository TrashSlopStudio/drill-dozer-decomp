#include "types.h"

void func_080D0EE0(u8 *p) {
    u8 *q = p;
    u8 t;
    u32 z;
    p += 36;
    t = *p + 1;
    z = 0;
    *p = t;
    p++;
    *p = z;
    *(u16 *)(q + 40) = z;
    *(u16 *)(q + 38) = z;
}
