#include "types.h"

extern u32 *func_08001728(u32);
extern void func_0800089C(u32, u32 *, u32);
extern void func_080EF438(void);

void func_080EF410(u32 *a) {
    u32 *p = func_08001728(0x60);
    *p = (u32)a;
    p[1] = *a;
    func_0800089C((u32)func_080EF438, p, 0x1802);
}
