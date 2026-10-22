#include "types.h"

struct S {
    u8 pad[20];
    u16 a;
    u16 b;
    u16 pad2[6];
    u16 c : 10;
    u16 e : 2;
    u16 f : 2;
};

struct D {
    struct S *s;
    u8 pad[20];
    u16 a;
    u16 b;
    u16 c;
    u8 e;
};

extern void func_08005560(struct S *p);

void func_0802B490(u32 a, struct D *d) {
    struct S *s = d->s;
    d->a = s->a;
    d->b = s->b;
    d->c = s->c;
    d->e = s->e;
    func_08005560(s);
}
