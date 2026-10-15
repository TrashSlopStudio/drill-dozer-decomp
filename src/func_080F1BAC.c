#include "types.h"

extern void func_080F0BE0(u8 *a, u32 b, u32 c);
extern void func_080F03E4(u8 *a);
extern void func_080F14C8(u8 *a, u32 d);

u32 func_080F1BAC(u8 *a, u32 b, u32 c, u32 d) {
    func_080F0BE0(a, b, c);
    func_080F03E4(a + 0x70);
    func_080F14C8(a, d);
    return 0;
}
