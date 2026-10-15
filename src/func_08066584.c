#include "types.h"

extern void func_080664D4(void);
extern u32 func_0800976C(u32, u32, u32);
extern u32 *func_0800098C(u32);

u32 func_08066584(u32 a) {
    u32 t = func_0800976C((u32)func_080664D4, 24, 0x3000);
    u32 *p = func_0800098C(t);
    p[0] = a;
    p[4] = 0;
    return t;
}
