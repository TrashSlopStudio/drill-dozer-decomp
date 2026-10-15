#include "types.h"

extern u16 func_080051F0(void *, u32);

void func_0802C2AC(u8 *p) {
    u16 *q;
    *(u32 *)(p + 0x2E4) = 0xDEADBEEF;
    q = (u16 *)(p + 0x2E8);
    *q = 0;
    *q = func_080051F0(p, 0x2EC);
}
