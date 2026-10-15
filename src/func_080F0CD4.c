#include "types.h"

extern void func_080F0A9C(u32, u32);

u32 func_080F0CD4(u8 *p) {
    u32 v = *(u32 *)(*(u8 **)(p + 0x58) + *(u32 *)(p + 4) * 20 + 4);
    func_080F0A9C(*(u32 *)(p + 0x5C), v);
    (*(u32 *)(p + 4))++;
    return 1;
}
