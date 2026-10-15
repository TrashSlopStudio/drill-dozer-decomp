#include "types.h"

struct R {
    u32 a;
    u32 b;
    u32 c;
};

struct S {
    u32 x;
    u32 y;
    struct R r[9];
};

s32 func_08073D28(struct S *p) {
    s32 i;

    for (i = 0; i <= 8; i++) {
        if (p->r[i].a == 0)
            return i;
    }
    return -1;
}
