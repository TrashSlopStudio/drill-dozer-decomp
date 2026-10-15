#include "types.h"

void func_08060600(u8 *a, u8 *b, u32 v) {
    u8 *p = a + 0x76;
    u32 z;
    if (*p != v)
        b[4] = *p;
    z = 0;
    *p = v;
    a[0x74] = z;
    a[0x75] = z;
}
