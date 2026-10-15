#include "types.h"

extern u32 *func_08001728(u32);
extern void func_0800089C(void (*)(void), u32 *, u32);
extern void func_080E8918(void);

void func_080E8A5C(u32 a) {
    u32 *p = func_08001728(12);
    *p = a;
    func_0800089C(func_080E8918, p, 0x1001);
}
