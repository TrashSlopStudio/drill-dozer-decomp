#include "types.h"

struct S {
    u8 pad[116];
    u8 a;
    u8 pad2;
    u8 b;
    u8 pad3[5];
    u32 c;
};

void func_0808D354(struct S *p, u8 v) {
    u32 *q = (u32 *)((u8 *)p + 124);
    p->a = v;
    p->b = 0;
    p->c = 0;
    q[1] = 0;
}
