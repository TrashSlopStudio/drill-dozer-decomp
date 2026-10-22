#include "types.h"

extern u32 *func_08001728(u32 a);
extern void func_0800089C(u32 a, u32 *b, u32 c);
extern void func_080EB800(void);

void func_080EB7D4(u32 a, u16 b) {
    u32 *p = func_08001728(8);
    p[0] = a;
    *(u16 *)(p + 1) = b;
    func_0800089C((u32)func_080EB800, p, 0x5806);
}
