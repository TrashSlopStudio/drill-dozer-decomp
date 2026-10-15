#include "types.h"

extern u8 *func_080B27D8(void);

void func_080B2988(s32 a, s32 b) {
    u8 *p = func_080B27D8();
    *(u16 *)(p + 78) += a;
    *(u16 *)(p + 82) += b;
}
