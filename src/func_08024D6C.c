#include "types.h"

struct S {
    u8 pad[0x24];
    u16 a, b, c, d;
};

struct R {
    u16 x0, w, y0, h;
};

void func_08024D6C(struct S **pp, struct R *r) {
    struct S *p;
    *(u32 *)&r->x0 = 0;
    *(u32 *)&r->y0 = 0;
    p = *pp;
    r->w = p->a - p->c;
    r->h = p->b - p->d;
}
