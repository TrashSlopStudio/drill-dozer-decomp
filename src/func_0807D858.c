#include "types.h"

struct S {
    u8 pad[22];
    u8 a[2];
};

void func_0807D858(struct S *p, u32 v) {
    u32 i;
    for (i = 0; i < 2; i++) {
        p->a[i] += v;
    }
}
