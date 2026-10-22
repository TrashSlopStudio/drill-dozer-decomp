#include "types.h"
extern void func_0801B064(u32);
extern void func_080854D4(u8 *, u32 *);

void func_080851DC(u8 *a) {
    u32 *p = (u32 *)(a + 0x7C);
    func_0801B064(p[0]);
    if (p[1] != 0)
        func_080854D4(a, p);
}
