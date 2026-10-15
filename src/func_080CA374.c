#include "types.h"

void func_080CA374(u8 *a, u8 *b, u8 c) {
    u8 *p = a + 0x76;
    u32 z = 0;
    *p = c;
    a[0x73] = z;
    b[20] = z;
    b[18] = z;
    b[19] = z;
}
