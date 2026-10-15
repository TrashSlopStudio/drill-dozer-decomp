#include "types.h"

extern void func_08008BDC(u32, s16, s16, u32, u32);

void func_0800ECC8(u8 *p, s16 a, s16 b, u32 c, u32 d) {
    func_08008BDC(*(u32 *)(p + 0x34), a, b, c, d);
}
