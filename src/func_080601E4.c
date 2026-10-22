#include "types.h"

void func_080601E4(u8 *a, u8 *b, u32 c) {
    u8 *p = a + 0x76;
    u32 t = *p;
    u32 z;
    if (t != c) {
        b[0x28] = t;
    }
    z = 0;
    *p = c;
    a[0x74] = z;
    a[0x75] = z;
}
