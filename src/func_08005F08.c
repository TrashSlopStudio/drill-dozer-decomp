#include "types.h"

struct S {
    u8 pad[0x18];
    s16 h;
    u8 pad2[0x23 - 0x1A];
    u8 a : 1;
    u8 b : 5;
};

void func_08005F08(struct S *p) {
    u32 v = p->b;
    v &= 8;
    if (v)
        p->h = -p->h;
}
