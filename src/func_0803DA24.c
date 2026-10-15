#include "types.h"

extern void func_08040448(u32, u32);

void func_0803DA24(u8 *p) {
    u8 b = *(u32 *)(p + 0x80) != 0;
    func_08040448(*(u32 *)(p + 0x160), b);
}
