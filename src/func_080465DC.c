#include "types.h"

extern void func_080471F4(u8 *, u32);

u32 func_080465DC(u8 *a) {
    *(u8 *)(a + 0x76) = 1;
    if (*(u16 *)(a + 0x16) == 0x6d) {
        func_080471F4(a, 10);
    } else {
        func_080471F4(a, 0);
    }
    return 0;
}
