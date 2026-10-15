#include "types.h"

extern void func_080067CC(u8 *, u8 *);
extern void func_0801B064(u8 *);

void func_080DB41C(u8 *a) {
    u8 *b = a + 0x7C;
    u8 *p = *(u8 **)(b + 0x24);
    if (p != 0) {
        *(u32 *)(b + 0x18) = p[1];
        func_080067CC(p, a + 0xA4);
        func_0801B064(*(u8 **)(b + 0x24));
    }
}
