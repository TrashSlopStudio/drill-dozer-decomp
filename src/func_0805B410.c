#include "types.h"

struct R {
    u8 a;
    u8 pad[3];
};

struct S {
    u8 pad[7];
    u8 n;
    u32 x;
    struct R *r;
};

u32 func_0805B410(u32 a, struct S *s) {
    s32 i;
    struct R *r;

    for (i = 0; i < s->n; i++) {
        r = s->r;
        if (r[i].a == 0)
            return 0;
    }
    return 1;
}
