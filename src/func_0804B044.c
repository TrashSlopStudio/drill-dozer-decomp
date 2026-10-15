#include "types.h"

extern u8 *gUnk_02036008;
extern void func_08005560(u32);
extern void func_080066B8(u32, u32);
extern void func_0800090C(u32);

void func_0804B044(void) {
    func_08005560(*(u32 *)(gUnk_02036008 + 4));
    func_080066B8(0x151, 16);
    func_0800090C(*(u32 *)(gUnk_02036008 + 8));
}
