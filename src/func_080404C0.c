#include "types.h"

extern void func_0803EC58(u8 *);
extern u8 *func_0803EC74(u8 *);
extern u32 func_08040484(s32, s32, u32);

void func_080404C0(u8 *a) {
    u8 *p;
    func_0803EC58(a);
    p = func_0803EC74(a);
    *(u32 *)(p + 68) = func_08040484(*(s16 *)(a + 36), *(s16 *)(a + 38), 1);
}
