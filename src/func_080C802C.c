#include "types.h"
extern void func_0804CEDC(u32, u8 *, u32, u32);
extern void func_08029E54(u32);
u32 func_080C802C(u8 *a, u8 *b) {
    *b = 8;
    func_0804CEDC(*(u32 *)(a + 12), a + 36, 1, 0);
    func_08029E54(70);
    a[156] = 2;
    return 1;
}
