#include "types.h"

struct S080009AC {
    u8 pad[0x10];
    u16 h;
};

extern struct S080009AC gUnk_03000010;

void func_080009AC(u8 a) { gUnk_03000010.h = (gUnk_03000010.h & 0xFFF8) | a; }
