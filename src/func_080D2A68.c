#include "types.h"

void func_080D2A68(u8 *a, u8 *b, u32 c) {
    u8 *p = a + 0x76;
    u32 z = 0;
    *p = c;
    a[0x73] = z;
    b[11] = z;
    b[12] = z;
}
