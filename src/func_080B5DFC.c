#include "types.h"

struct S {
    u32 a;
    u32 b;
    u32 c;
    u32 d;
    u16 e;
    u16 f;
    u32 pad;
    u32 g;
};
void func_080B5DFC(struct S *p, u8 f, u32 b, u32 a) {
    u32 z = 0;
    p->f = f;
    p->a = a;
    p->c = a;
    p->b = b << 8;
    p->d = z;
    p->e = z;
    p->g = z;
}
