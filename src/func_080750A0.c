#include "types.h"

extern u32 func_08011720(u32);
extern u8 *func_0802FD90(void);
extern void func_0802FF2C(u32, u32, u32);

void func_080750A0(u32 a, u32 b) {
    u32 x = func_08011720(a);
    *(u32 *)(func_0802FD90() + 12) = b;
    func_0802FF2C(x, 37, 0);
}
