#include "types.h"

extern u32 func_0801AF20(u8 *, u32);
extern void func_08097B04(u8 *);
extern void func_08097B8C(u8 *);

void func_08097AE4(u8 *a) {
    *(u32 *)(a + 0x7C) = func_0801AF20(a, 2);
    func_08097B04(a);
    func_08097B8C(a);
}
