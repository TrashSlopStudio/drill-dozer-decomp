#include "types.h"

extern void func_080070B4(u8 *, s16, s16);
void func_08008820(u8 *p, s16 x, s16 y) {
    func_080070B4(p, x, y);
    if (*(u8 **)(p + 0x40))
        func_080070B4(*(u8 **)(p + 0x40), x, y);
}
