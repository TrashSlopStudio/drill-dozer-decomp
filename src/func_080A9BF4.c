#include "types.h"

extern u8 gUnk_08407C94[];
extern void func_0807E46C(void *, s32, s32, u32, u32);

void func_080A9BF4(s16 a, s16 b) {
    union {
        s16 h[2];
        u32 w;
    } v;
    v.h[0] = a;
    v.h[1] = b;
    func_0807E46C(gUnk_08407C94, v.h[0], v.h[1], 0, 0);
}
