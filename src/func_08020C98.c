#include "types.h"

struct S {
    u8 pad[0x21];
    u8 f : 2;
};

void func_08020C98(u8 *a, s8 v) { (*(struct S **)(a + 0x2B4))->f = v; }
