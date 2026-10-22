#include "types.h"
extern u8 *func_0801B3A8(u8 *, u32, u32);
extern void func_08005814(u8 *, u32);
extern void func_08029E54(u32);
void func_080D78B0(u8 *a) {
    u8 *p = func_0801B3A8(a, 2, 188);
    *(u8 **)(a + 124) = p;
    p[3] = 48;
    func_08005814(*(u8 **)(a + 124), 0x08485810);
    func_08029E54(23);
}
