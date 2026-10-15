#include "types.h"

extern void func_0809A330(u32);

u32 func_0809A284(u32 a, u8 *p) {
    func_0809A330(a);
    if ((p[8] & 1) == 0)
        return 3;
    return 5;
}
