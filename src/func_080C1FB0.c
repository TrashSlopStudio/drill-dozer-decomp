#include "types.h"

struct S {
    u32 a;
    u16 b;
    u16 c;
    u8 pad[3];
    u8 d;
    u16 pad2;
    u16 e;
};

extern void func_080051C4(u32);

void func_080C1FB0(struct S *p) {
    p->e = 0;
    p->d = 0;
    p->c = 0;
    p->b = 0;
    func_080051C4(p->a);
}
