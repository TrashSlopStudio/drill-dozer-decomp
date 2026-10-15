#include "types.h"

struct R {
    u8 f;
    u8 pad2[243];
};
struct S {
    u8 pad[0xC0];
    struct R r[2];
    u8 pad3[0x2DE - 0xC0 - 488];
    u8 idx;
};

extern struct S *gUnk_020358CC;

u8 func_0802C760(void) { return gUnk_020358CC->r[gUnk_020358CC->idx].f; }
