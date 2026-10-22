#include "types.h"
extern void func_0801C128(u8 *, u32, u32);
u32 func_08076DA8(u8 *p, u32 a) {
    u8 *q = p + 0x76;
    if (*q > 8) {
        return 0;
    }
    func_0801C128(p, a, 0);
    *q = 6;
    return 1;
}
