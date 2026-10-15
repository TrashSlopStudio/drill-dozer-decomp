#include "types.h"

struct S {
    u32 unk0;
    struct S *sub;
    u32 unk8;
    u32 unkC;
    u8 pad10[8];
    u16 x;
    u16 y;
};

extern struct S *gUnk_02036008;

void func_0804B26C(u16 *a) {
    struct S *p = gUnk_02036008;
    if (p != 0) {
        p->sub->x = a[0];
        p->sub->y = a[1];
        p->unkC = *(u32 *)a;
    }
}
