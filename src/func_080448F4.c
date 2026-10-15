#include "types.h"

extern void func_0801AEF0(u32, u32);

struct S {
    u8 *p;
    u8 pad[3];
    s8 f;
};

void func_080448F4(u32 a, struct S *s) {
    u8 v;
    func_0801AEF0(a, (u32)s->p);
    v = s->f;
    if (s->f == 1)
        s->p[1] = v;
}
