#include "types.h"

void func_080264C4(u8 *a) {
    u8 v;
    if (a[3] == 0) {
        (*(u16 *)(a + 6))++;
        if (*(u16 *)(a + 6) > 95) {
            *(u16 *)(a + 6) = 0;
        }
        v = 0;
    } else {
        v = 1;
    }
    a[4] = v;
    a[3] = 0;
}
