#include "types.h"

void func_080DA274(u8 *p) {
    u8 *q = p + 0x7C;
    *(u32 *)(q + 4) = 0;
    p[0x74] = 0;
    p[0x76] = 0;
    p[0x73] = 0;
}
