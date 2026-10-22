#include "types.h"
extern void func_080057F0(u32, u32, u32);
u32 func_080983E0(u32 a, u8 *p) {
    u8 *q = p + 44;
    if (a == *q) {
        return 0;
    }
    func_080057F0(*(u32 *)p, 0, 0);
    *q = a;
    return 1;
}
