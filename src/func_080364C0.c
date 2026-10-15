#include "types.h"

struct S {
    u8 pad[0x154];
    s32 v;
};

void func_080364C0(struct S *p) {
    p->v -= 0x8000;
    if (p->v < 0)
        p->v = 0;
}
