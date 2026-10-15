#include "types.h"

struct S {
    u32 a;
    u32 b;
    u32 c;
    u32 d;
    u16 e;
    u16 f;
};

void func_080B6D28(struct S *p, u8 f, s32 b, u32 a) {
    p->f = f;
    p->a = a;
    p->c = a;
    p->b = b << 8;
    p->d = 0;
    p->e = 0;
}
