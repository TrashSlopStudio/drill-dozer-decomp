#include "types.h"

extern u32 func_080F11B4(u8 *);
extern void func_080F14C8(u8 *, u32);
int func_080F1B08(u8 *a, int b, int c, u32 d) {
    if (func_080F11B4(a) == 0)
        return 0;
    func_080F14C8(a, d);
    return 1;
}
