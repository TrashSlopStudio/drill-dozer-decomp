#include "types.h"

extern u8 *func_08066C8C(void);

u32 func_08066D00(void) {
    u8 *p = func_08066C8C();
    u32 r;

    if (p == 0)
        r = 3;
    else
        r = *(u32 *)(p + 0x4008);
    return r;
}
