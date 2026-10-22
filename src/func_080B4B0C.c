#include "types.h"

extern void func_080B3D50(u8 *a, u8 *b, int c);

int func_080B4B0C(u8 *a, u8 *b) {
    u8 n = ++a[0x73];
    if (n > 0x78 || b[11] == 2) {
        func_080B3D50(a, b, 9);
    }
    return 1;
}
