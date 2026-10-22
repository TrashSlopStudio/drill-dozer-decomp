#include "types.h"
extern u32 func_0809392C(u32, u32);
extern void func_08093940(u32, u32);
extern void func_0802FF64(u32, u32);
u32 func_08093498(u8 *a) {
    u8 *b = a + 0x7C;
    if (func_0809392C((u32)a, (u32)b) == 0) {
        func_08093940((u32)a, (u32)b);
        func_0802FF64(*(u32 *)(a + 0xC), 0x1D);
    }
    return 0;
}
