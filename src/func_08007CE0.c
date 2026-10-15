#include "types.h"

struct R {
    u32 a;
    u32 b;
};

struct S {
    u8 pad[12];
    u16 x0;
    u16 x1;
    u16 x2;
    u16 x3;
    u8 pad2[4];
    u16 h18;
    u16 h1A;
    u8 pad3[0x24];
    struct S *next;
};

void func_08007CE0(struct S *p) {
    struct S *q;
    p->x0 = 0;
    p->x1 = p->h1A;
    p->x2 = 0;
    p->x3 = p->h18;
    q = p->next;
    if (q != 0)
        *(struct R *)&q->x0 = *(struct R *)&p->x0;
}
