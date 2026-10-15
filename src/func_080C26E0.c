#include "types.h"

struct S {
    u8 pad[8];
    u16 x;
    u16 y;
    u8 *p;
    u8 buf[4];
};

extern void func_080067CC(u8 *, u8 *);
extern void func_08005560(u8 *);

void func_080C26E0(u32 a, struct S *s) {
    u8 *p = s->p;
    s->x = *(u16 *)(p + 20);
    s->y = *(u16 *)(p + 22);
    func_080067CC(p, s->buf);
    func_08005560(s->p);
}
