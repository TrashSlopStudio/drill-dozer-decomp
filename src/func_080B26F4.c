#include "types.h"
extern void func_080067CC(u8 *, u8 *);
extern void func_080B27C0(u32, u8 *);
void func_080B26F4(u32 a, u8 *p) {
    func_080067CC(*(u8 **)p, p + 28);
    p[27] = (*(u8 **)p)[1];
    func_080B27C0(a, p);
}
