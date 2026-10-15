#include "types.h"

extern void func_08010A64(u32 a, u32 b, u32 c, u32 d);
extern void func_080B06EC(u8 *);

u32 func_080B11AC(u8 *a) {
    u32 *q = *(u32 **)(a + 4);
    func_08010A64(q[1], 2, q[2], 0);
    func_080B06EC(a);
    return 0;
}
