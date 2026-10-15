#include "types.h"

struct S {
    u8 pad[0x3c];
    u8 a : 3;
    u8 b : 1;
    u8 c : 4;
    u8 pad2[7];
};

extern struct S gUnk_020259D8[];

void func_080096C4(u32 i, u32 v) { gUnk_020259D8[i].b = v; }
