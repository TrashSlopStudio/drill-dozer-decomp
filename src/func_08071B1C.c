#include "types.h"

extern u32 func_0801243C();

u32 func_08071B1C(u32 *a) {
    u32 buf = 0;
    a[2] = func_0801243C(*(u8 *)(*a + 18), *(u16 *)(a + 1), &buf, 0);
    if (a[2] != 255) {
        return 1;
    }
    return 0;
}
