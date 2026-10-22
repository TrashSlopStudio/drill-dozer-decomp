#include "types.h"
extern void func_080289A0(u8 *, u8 *);
extern void func_08012568(u8, s16);
extern void func_0801B1C4(u8 *);
void func_080283D0(u8 *p) {
    u8 *a = p + 0x7c;
    u8 *b = *(u8 **)(a + 24);
    u8 *c;
    b += 0x7c;
    func_080289A0(p, a);
    c = *(u8 **)(a + 24);
    func_08012568(p[20], *(s16 *)(b + 8));
    func_0801B1C4(c);
}
