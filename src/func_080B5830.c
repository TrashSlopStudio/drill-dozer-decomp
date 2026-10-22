#include "types.h"

extern void func_08044E64(u8 *p);

void func_080B5830(u8 *a) {
    u8 *p = a + 0x7c;
    u8 *q = *(u8 **)(p + 4);
    p[0x1b] = (u32)(q[0x25] << 28) >> 30;
    p[0x1e] = q[1];
    p[0x1f] = q[3];
    func_08044E64(a + 0x80);
}
