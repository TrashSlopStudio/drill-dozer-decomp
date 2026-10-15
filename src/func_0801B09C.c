#include "types.h"

struct S {
    u8 pad[10];
    u8 b;
    u8 pad2[13];
    u16 h;
};

void func_0801B09C(struct S *p, u32 a) {
    if (a == 1)
        p->h = p->b & 1;
    else
        p->h = 0;
}
