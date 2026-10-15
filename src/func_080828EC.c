#include "types.h"

extern s8 *func_080444A4(u8);

void func_080828EC(u8 *p, u32 x, u32 y, u16 *out) {
    s8 *e;
    p += 0x7C;
    e = func_080444A4(p[18]);
    out[0] = x;
    out[1] = y - e[12];
}
