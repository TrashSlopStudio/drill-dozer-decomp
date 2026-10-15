#include "types.h"

struct S {
    u32 a;
    u32 pad[5];
    u32 (*fn)(struct S *, u32);
};

u32 func_08056110(struct S *p, u32 b) {
    if (p->fn != 0 && p->a != 4)
        return p->fn(p, b);
    return 0;
}
