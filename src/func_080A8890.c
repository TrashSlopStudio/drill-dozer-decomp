#include "types.h"

void func_080A8890(u8 *a, u8 *b, u8 v) {
    u8 *p = a + 0x76;
    u32 z = 0;
    *p = v;
    a[0x73] = z;
    b[1] = z;
    b[2] = z;
}
