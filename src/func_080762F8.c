#include "types.h"

extern void func_08029E34(u16);

u32 func_080762F8(u8 *p, u32 a) {
    func_08029E34(a);
    *(u16 *)(p + 0x22) = a;
    return 1;
}
