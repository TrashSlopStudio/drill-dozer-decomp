#include "types.h"

extern void func_080459C0(u8 *, u8 *);

void func_0804558C(u8 *p) {
    u8 *q = p + 0x7C;
    if (p[0xAE] & 2)
        func_080459C0(p, q);
}
