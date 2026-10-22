#include "types.h"
extern void func_080B29D4(u32 *);
extern void func_080C07C4(void);
void func_080C04C0(u8 *a) {
    u32 v;
    *(u32 *)(a + 0xC) = 0;
    *(u32 *)(a + 0x24) = 0;
    func_080B29D4(&v);
    *(u32 *)(a + 0x48) = v;
    *(u32 *)(a + 0x58) = 0;
    *(u32 *)(a + 0x5C) = 0xFFFE0000;
    func_080C07C4();
}
