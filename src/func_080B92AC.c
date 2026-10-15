#include "types.h"

struct S {
    u8 pad[0x60];
    u8 a;
    u8 b;
    u8 c;
};

void func_080B92AC(struct S *p, u16 v) {
    p->c = v;
    if (p->b > v)
        p->b = v;
    p->a = 1;
}
