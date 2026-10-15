#include "types.h"

extern u32 *func_08001728(u32);
extern void func_0800089C(void (*)(void), u32 *, u32);
extern void func_08022078(void);

void func_08022050(u32 a) {
    u32 *p = func_08001728(8);
    p[0] = a;
    ((u8 *)p)[4] = 3;
    func_0800089C(func_08022078, p, 512);
}
