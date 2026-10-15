#include "types.h"
extern void func_0802B660(u32);
u32 func_0801C010(u8 *a, u32 b) {
    if (a[0x70] & 6)
        return 0;
    func_0802B660(b);
    return 1;
}
