#include "types.h"
extern void func_0801B064(u32);
extern void func_08012884(u32);
extern void func_080B27E4(void);
void func_080B2D6C(u32 a) {
    u32 *p = (u32 *)(a + 0x84);
    s32 i = 1;
    do {
        func_0801B064(*p++);
        i--;
    } while (i >= 0);
    func_08012884(0x68);
    func_08012884(0x69);
    func_080B27E4();
}
