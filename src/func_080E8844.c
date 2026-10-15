#include "types.h"

extern u32 *func_08001728(u32);
extern void func_0800089C(void (*)(void), u32 *, u32);
extern void func_080E8868(void);

void func_080E8844(u32 a) {
    u32 *p = func_08001728(8);
    *p = a;
    func_0800089C(func_080E8868, p, 0x1801);
}
