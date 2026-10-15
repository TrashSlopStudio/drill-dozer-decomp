#include "types.h"
extern u16 func_08000F88(u32);
extern void func_08000F28(u32, u16);
extern void func_0800102C(u32);
void func_08000414(void) {
    u16 v = func_08000F88(4) & 0xFF;
    v |= 0x9600;
    v |= 0x20;
    func_08000F28(4, v);
    func_0800102C(4);
}
