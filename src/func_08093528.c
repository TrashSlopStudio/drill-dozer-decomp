#include "types.h"
extern u32 gUnk_083CA780[];
extern u32 func_080F8FBC(u8 *, u8 *, u32);
void func_08093528(u8 *a) {
    u32 *p = (u32 *)(a + 0x7c);
    while (func_080F8FBC(a, (u8 *)p, gUnk_083CA780[*p]) == 1) {
    }
}
