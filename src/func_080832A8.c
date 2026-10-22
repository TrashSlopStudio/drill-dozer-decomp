#include "types.h"
extern u8 *func_08011720(void);
extern void func_0802FF2C(u8 *, int, int);
void func_080832A8(int a, u32 b, u32 c) {
    u8 *p = func_08011720();
    func_0802FF2C(p, 25, 0);
    *(u32 *)(p + 252) = c;
    *(u32 *)(p + 256) = b;
}
