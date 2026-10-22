#include "types.h"

u32 func_08029944(u8 *a, u8 **b) {
    u32 z = 0;
    if ((*b)[14] == 1) {
        *(u32 *)(a + 92) = 0xFFFA0000;
        *(u16 *)(a + 96) = z;
        a[118] = z;
    }
    return 0;
}
