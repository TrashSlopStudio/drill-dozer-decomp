#include "types.h"

extern void func_08071610(u8 *a);
extern void func_080715AC(u8 *a);

int func_08071848(u8 *a) {
    *(u32 *)(a + 0x1c) = 90;
    *(u32 *)(a + 0x20) = 100;
    *(u32 *)(a + 0x18) = 448;
    func_08071610(a);
    func_080715AC(a);
    return 1;
}
