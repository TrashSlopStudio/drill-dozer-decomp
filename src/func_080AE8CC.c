#include "types.h"

void func_080AE8CC(u8 **p) {
    p[0][3] = *((u8 *)p + 0x54) + 2;
    p[1][3] = *((u8 *)p + 0x54) + 1;
    p[13][3] = *(u16 *)((u8 *)p + 0x54);
}
