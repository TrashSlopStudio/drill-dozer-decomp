#include "types.h"

extern u32 func_0801BFC0(u8 *, u8 *, u32);
extern void func_08029E54(u32);

u32 func_080773C4(u8 *p) {
    if (func_0801BFC0(p, p + 104, 0) == 1)
        func_08029E54(75);
    return 0;
}
