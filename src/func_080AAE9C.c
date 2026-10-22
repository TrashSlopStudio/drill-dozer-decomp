#include "types.h"

void func_080AAE9C(u8 *a, u32 *b, u8 c) {
    b[10] = 0;
    a[0x76] = c;
    if ((u8)(c - 5) > 3) {
        a[0x77] = c;
    }
}
