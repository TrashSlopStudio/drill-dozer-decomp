#include "types.h"

extern u8 func_08019B88(void);
extern void func_080F14C8(u8 *, u32);

u32 func_080F1820(u8 *a, u32 b, u32 c, u32 d) {
    if (func_08019B88() != 0)
        return 0;
    func_080F14C8(a, d);
    return 1;
}
