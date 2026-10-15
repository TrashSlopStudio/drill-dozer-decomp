#include "types.h"

extern u32 gUnk_020358A4;
extern u32 gUnk_020358AC;
extern void func_0802BA0C(u32, u32 *, u32);

void func_0802B86C(u32 a) {
    u32 t = gUnk_020358AC;
    func_0802BA0C(a, &gUnk_020358A4, t);
}
