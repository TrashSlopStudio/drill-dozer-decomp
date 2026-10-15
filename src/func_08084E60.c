#include "types.h"
extern void func_0801B064(u32);
extern void func_08005560(u32);
void func_08084E60(u32 a, u32 *p) {
    u32 *q;
    int i;
    func_0801B064(*p++);
    q = p;
    i = 2;
    do {
        func_08005560(*q++);
    } while (--i >= 0);
}
