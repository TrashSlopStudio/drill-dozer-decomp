#include "types.h"

struct S {
    u32 a;
    u32 b;
    u32 c;
    u8 pad[0x2A];
    u8 f : 1;
};

extern void func_08006CBC(u32);

void func_080B33D0(u32 a, struct S *p) {
    func_08006CBC(p->b);
    func_08006CBC(p->c);
    p->f = 0;
}
