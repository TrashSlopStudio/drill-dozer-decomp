#include "types.h"

struct S {
    u8 pad[0x21];
    u8 f : 2;
    u8 pad2;
    u8 lo : 1;
    u8 g : 5;
};

void func_08020D54(u8 *a) {
    struct S **p = (struct S **)(a + 0x2B4);
    (*p)->f = 3;
    (*p)->g = 2;
}
