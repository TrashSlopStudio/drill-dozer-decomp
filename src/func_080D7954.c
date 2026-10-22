#include "types.h"
extern u32 *func_08001728(u32);
extern void func_080DC598(u32);
extern void func_0800089C(u32, u32 *, u32);
extern void func_080D7980(void);
void func_080D7954(u32 a) {
    u32 *p = func_08001728(16);
    *p = a;
    func_080DC598(a);
    func_0800089C((u32)func_080D7980, p, 0x1801);
}
