#include "types.h"

extern void func_0801B0B4(u8);
extern u8 func_08080F7C(u8 *, u32, u32);

u32 func_08081894(u8 *p, u32 a) {
    func_0801B0B4(p[20]);
    p[0x76] = func_08080F7C(p, a, 14);
    return 1;
}
