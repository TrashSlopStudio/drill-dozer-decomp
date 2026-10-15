#include "types.h"

struct S {
    u16 a, b, c, d, e;
    u16 f;
};

extern struct S gUnk_02034748;
extern int func_08076264(u8 *, u8);
extern void func_080762A4(u8 *, u16);

void func_0800C558(u8 *p) {
    gUnk_02034748.f = func_08076264(p, p[18]);
    func_080762A4(p, gUnk_02034748.f);
}
