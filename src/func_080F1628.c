#include "types.h"

extern void func_08017E18();
extern void func_080F14C8();

u32 func_080F1628(u8 *a, u32 b, u32 c, u32 d) {
    func_08017E18(*(u32 *)(a + 0x24), 2, 2, 1, c);
    func_080F14C8(a, d);
    return 1;
}
