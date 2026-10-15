#include "types.h"

extern u32 func_080177BC(u8 *);
extern s16 *func_080178B4(u32, u32);

s32 func_080178C8(u8 *a) {
    u32 x = *(u32 *)(a + 0x448);
    return *func_080178B4(x, func_080177BC(a));
}
