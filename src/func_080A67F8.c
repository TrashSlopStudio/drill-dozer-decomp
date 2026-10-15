#include "types.h"
extern void func_080A6624(void *a, u8 *b);
void func_080A67F8(u8 *a) {
    u8 *b = a + 0x7C;
    if (b[0x18] & 2) {
        *(u8 *)(*(int *)(b + 4) + 1) = 1;
    } else {
        func_080A6624(a, b);
    }
}
