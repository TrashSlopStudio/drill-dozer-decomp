#include "types.h"
extern void func_0801B1C4(u8 *p, u8 **q);
extern void func_0806F468(u8 *p, u8 **q);
void func_0806F378(u8 *p) {
    u8 **q = (u8 **)(p + 0x7c);
    u8 *s = *q;
    if (*(u32 *)(s + 12) == 0 || *(u16 *)(s + 22) != *(u16 *)(p + 24)) {
        func_0801B1C4(p, q);
    } else {
        *(u32 *)(p + 36) = *(u32 *)(s + 36);
        func_0806F468(p, q);
    }
}
