#include "types.h"

extern void func_080F0B2C(u8 *);

u32 func_080F0C88(u8 *p) {
    func_080F0B2C(*(u8 **)(p + 0x58) + *(u32 *)(p + 4) * 20);
    (*(u32 *)(p + 4))++;
    return 1;
}
