#include "types.h"

struct S {
    u32 a;
    u8 b;
};

extern void func_08005560(u32);
extern void func_08006CBC(u32);

void func_0804D114(u32 x, struct S *p) {
    if (p->b == 0)
        func_08006CBC(p->a);
    else
        func_08005560(p->a);
}
