#include "types.h"

extern void func_08017E18(u32, u32, u32, u32, u32);
extern void func_080F14C8(u32 *, u32);

u32 func_080F15FC(u32 *a, u32 b, u32 c, u32 d) {
    func_08017E18(a[9], 2, 2, 0, 0);
    func_080F14C8(a, d);
    return 1;
}
