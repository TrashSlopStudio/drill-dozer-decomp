#include "types.h"

extern void func_0807E4B4(u32);

void func_08035EC8(u8 *p) {
    u32 q = *(u32 *)(p + 0x1F0);
    if (q != 0)
        func_0807E4B4(q);
}
