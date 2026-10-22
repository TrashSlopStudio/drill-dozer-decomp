#include "types.h"

extern void func_0800FA88(u32, u32, u32);
extern void func_0800F9D4(u32, u32, u32, u32);

void func_080938A8(u8 *a, u8 *b) {
    int i;
    u32 p = (u32)b + 0x38;
    for (i = 3; i >= 0; i--) {
        func_0800FA88(*(u32 *)(a + 12), p, 0);
        func_0800F9D4(*(u32 *)(a + 12), p, 0, 1);
        p += 4;
    }
}
