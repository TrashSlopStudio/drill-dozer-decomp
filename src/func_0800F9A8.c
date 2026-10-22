#include "types.h"
extern u16 func_08015EDC(u32, s32, s32);
extern void func_08015F18(u32, u32, u32);
void func_0800F9A8(u8 *a, s16 *b, u32 c) {
    u32 r = func_08015EDC(*(u32 *)(a + 0x34), b[0], b[1]);
    func_08015F18(*(u32 *)(a + 0x34), r, c);
}
