#include "types.h"

extern void func_08005560(u32);
extern void func_080066B8(u32, u32);

void func_08069FFC(u8 *p) {
    u32 i;
    u32 *q;

    for (i = 0, q = (u32 *)(p + 8); i <= 10; i++)
        func_08005560(*q++);
    func_080066B8(*(u16 *)(p + 4), 104);
}
