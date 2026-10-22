#include "types.h"
extern void func_08018E94(u32 a, u32 b, u32 c);
extern u8 gUnk_08332A74[];
extern u8 gUnk_08333864[];
void func_08066890(u32 a, u32 i) {
    u8 *t = gUnk_08332A74;
    u8 *p = t + i * 4;
    func_08018E94((u32)gUnk_08333864 + (p[2] << 5), *(u8 *)(a + 0x4005) << 4, 32);
}
