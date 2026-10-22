#include "types.h"

extern void func_080F8C74(u32, u32, u32);
extern u32 func_080F8D48(u32, u32, u32);

u32 func_0802C3CC(u32 a, u32 b) {
    func_080F8C74(a, b, 748);
    if (func_080F8D48(b, a, 748) == 0)
        return 1;
    return 0;
}
