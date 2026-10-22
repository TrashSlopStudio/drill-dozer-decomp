#include "types.h"

extern u32 gUnk_083C0FD8[];
extern void func_08090A70(u32, u32, s16, s16);
extern void func_08005814(u32, u32);

void func_08091118(u32 a, u32 b, s16 c, s16 d, u32 e) {
    func_08090A70(a, b, c, d);
    func_08005814(b, gUnk_083C0FD8[e]);
}
