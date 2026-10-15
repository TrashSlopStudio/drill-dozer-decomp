#include "types.h"

struct S {
    u16 a;
    u16 b;
    u32 c;
    u32 d;
    u32 e;
};

void func_080014EC(struct S *p, u32 d, u32 e, u32 c) {
    p->a = 0;
    p->b = 0xA3A3;
    p->c = c;
    p->d = d;
    p->e = e;
}
