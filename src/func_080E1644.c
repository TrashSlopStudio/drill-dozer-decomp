#include "types.h"

void func_080E1644(u8 *a, u32 b, u32 c) {
    u8 *p = a + 0x76;
    u32 z = 0;
    *p = c;
    a[0x77] = z;
    a[0x74] = z;
    a[0x75] = z;
    a[0x73] = z;
}
