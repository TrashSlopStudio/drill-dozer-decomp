#include "types.h"

struct S20 {
    u32 a[5];
};

struct E {
    u8 pad[0x1C];
    struct S20 cur;
    u8 pad2[2];
    s8 idx;
    u8 pad3[5];
    struct S20 tbl[1];
};

void func_080E421C(struct E *e) { e->cur = e->tbl[e->idx]; }
