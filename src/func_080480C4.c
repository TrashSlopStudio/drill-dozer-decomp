#include "types.h"

struct S {
    u8 pad[22];
    u16 a[4];
    u8 pad2;
    u8 b[4];
};

extern void func_0804804C(struct S *, u32);

void func_080480C4(struct S *p, u32 i) {
    func_0804804C(p, i);
    p->a[i]++;
    p->b[i]++;
}
