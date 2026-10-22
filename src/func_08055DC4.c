#include "types.h"
extern u32 *func_08001728(u32);
extern void func_0800089C(u32, u32 *, u32);
extern void func_08055D30(void);
void func_08055DC4(u32 a) {
    u32 *p = func_08001728(0x80C);
    func_0800089C((u32)func_08055D30, p, 0x1801);
    p[0] = a;
    p[1] = 0;
    p[2] = 0;
}
