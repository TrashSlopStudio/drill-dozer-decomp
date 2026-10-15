#include "types.h"

extern u32 func_080800E4(u32 *);

void func_08035EAC(u8 *p) {
    u32 *q = (u32 *)(p + 0xF8);
    *q = 0;
    *(u32 *)(p + 0x1F0) = func_080800E4(q);
}
