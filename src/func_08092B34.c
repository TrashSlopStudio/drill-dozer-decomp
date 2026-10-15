#include "types.h"
void func_08092B34(u8 *a, u8 *b, u8 c) {
    u8 *p = a + 0x78;
    u8 z = 0;
    *p = c;
    a[0x79] = z;
    b[4] = z;
}
