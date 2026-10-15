#include "types.h"

struct S {
    u32 w[9];
    u32 a;
    u32 b;
    u32 c;
    u32 pad[2];
};

void func_080E38A8(struct S *d, struct S *s, u32 a, u32 b, u32 c) {
    *d = *s;
    d->a = a;
    d->b = b;
    d->c = c;
}
