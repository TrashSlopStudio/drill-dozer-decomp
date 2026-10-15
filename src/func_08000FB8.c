#include "types.h"

extern u8 gUnk_03000028[];
extern void func_08000F28(u8, u16);

void func_08000FB8(u8 a, u16 b) {
    u16 v = *(u16 *)(gUnk_03000028 + a);
    v |= b;
    func_08000F28(a, v);
}
