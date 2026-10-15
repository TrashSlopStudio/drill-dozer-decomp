#include "types.h"
extern void func_0807E4B4(u32);
extern void func_0801B1C4(u32);
void func_0808708C(u8 *a) {
    u32 *p;
    s32 i;
    func_0807E4B4(*(u32 *)(a + 0x20));
    p = (u32 *)(a + 0x24);
    i = 2;
    do {
        func_0801B1C4(*p++);
    } while (--i >= 0);
}
