#include "types.h"

extern void func_08011834(u8 *p, s16 *out);
extern u32 func_08014E20(u32 a, s32 x, s32 y);

u32 func_0802F804(u8 *p) {
    s16 v[2];
    s16 *q = v;
    func_08011834(p, v);
    q[1] += 2;
    return func_08014E20(*(u32 *)(p + 0x30), v[0], q[1]);
}
