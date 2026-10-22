#include "types.h"

extern u32 func_080EB278(void);
extern void func_080067D8(u32 a, u32 b);
extern void func_08005B18(u32 a, u32 b);
extern void func_0801AEF0(u32 a, u32 b);

void func_080EB070(u32 p) {
    u32 *q = (u32 *)(p + 0x7C);
    q[4] = func_080EB278();
    func_080067D8(q[4], p + 0x94);
    func_08005B18(q[4], q[5]);
    func_0801AEF0(p, q[4]);
}
