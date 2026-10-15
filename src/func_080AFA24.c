#include "types.h"

void func_080AFA24(u8 *p, u8 *s) {
    u8 *q = p + 0x7C;
    u16 v = *(u16 *)(s + 2);
    u8 z = 0;
    *(u16 *)q = v;
    *(u16 *)(q + 2) = *(u16 *)(s + 4);
    *(s32 *)(q + 4) = -*s;
    p[0x76] = z;
}
