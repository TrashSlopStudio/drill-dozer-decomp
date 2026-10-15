#include "types.h"

extern void func_0801B064(u32);
extern void func_08005560(u32);

void func_080436A8(u8 *p) {
    u32 *q = (u32 *)(p + 0x7C);
    func_0801B064(*(u32 *)(p + 0x7C));
    func_08005560(q[1]);
}
