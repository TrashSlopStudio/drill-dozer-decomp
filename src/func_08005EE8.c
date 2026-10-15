#include "types.h"

struct S {
    u8 pad[0x1A];
    s16 h;
    u8 pad2[7];
    u8 a : 1;
    u8 f : 5;
};

void func_08005EE8(struct S *p) {
    u32 v = p->f;
    v &= 16;
    if (v)
        p->h = -p->h;
}
