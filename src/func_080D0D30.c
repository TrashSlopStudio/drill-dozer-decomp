#include "types.h"

struct D {
    u8 pad[20];
    u16 x;
    u16 y;
};
struct S {
    u8 pad[8];
    struct D *d;
    u16 pad2[2];
    u16 a;
    u16 b;
};
struct P {
    u16 x;
    u16 y;
};

extern void func_08010B00(struct P *);

void func_080D0D30(struct S *s) {
    struct P p;
    func_08010B00(&p);
    s->d->x = s->a - p.x;
    s->d->y = s->b - p.y;
}
