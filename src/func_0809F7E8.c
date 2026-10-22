#include "types.h"
void func_0809F7E8(u8 *a, u32 b) {
    a[0xF0] = b;
    if (b == 1) {
        a[0xEE] = 16;
    } else {
        a[0xEE] = 0;
        a[0xEF] = 1;
    }
}
