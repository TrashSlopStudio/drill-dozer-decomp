#include "types.h"
extern void func_08012C08(u8 *, u8 *, u32, u32);
void func_080C1C1C(u8 *a, u16 *b) {
    u32 x, y;
    *(u16 *)(a + 36) = b[0];
    *(u16 *)(a + 38) = b[1];
    func_08012C08(a + 60, a + 36, 15, 12);
    x = *(u32 *)(a + 60);
    y = *(u32 *)(a + 64);
    *(u32 *)(a + 44) = x;
    *(u32 *)(a + 48) = y;
    *(u32 *)(a + 52) = x;
    *(u32 *)(a + 56) = y;
}
