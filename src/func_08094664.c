#include "types.h"

extern void func_080948C0(u8 *, u8 *);

void func_08094664(u8 *p) {
    u8 *q = p + 0x7C;
    if (*(u32 *)(p + 0x7C) != 0)
        func_080948C0(p, q);
}
