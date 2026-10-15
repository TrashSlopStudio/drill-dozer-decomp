#include "types.h"

extern void func_0805FBA4(u8 *a, u8 *b, u32 c);

void func_0805FC54(u8 *a, u8 *b, u32 c, u32 d) {
    if (d == 0)
        a[120] = 8;
    else
        b[42] = 8;
    func_0805FBA4(a, b, c);
}
