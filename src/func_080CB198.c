#include "types.h"

extern void func_08005560(u32);
extern void func_080CAED0(u32);

void func_080CB198(u8 *p) {
    u32 *q = (u32 *)(p + 0x7C);
    func_08005560(q[1]);
    func_080CAED0(q[4]);
}
