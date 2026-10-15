#include "types.h"

void func_080E969C(u8 *a, u8 *b, u32 c) {
    u8 *p = a + 0x76;
    u8 z = 0;
    *p = c;
    a[0x73] = z;
    b[14] = z;
}
