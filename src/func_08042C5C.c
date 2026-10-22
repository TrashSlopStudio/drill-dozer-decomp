#include "types.h"

extern u32 func_0801243C(u32, u32, u32 *, u32);
extern void func_0801BDC8(u8 *, u32);

void func_08042C5C(u8 *p) {
    u32 v = 0;
    func_0801BDC8(p, func_0801243C(p[18], 145, &v, 1));
}
