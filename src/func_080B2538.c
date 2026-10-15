#include "types.h"

extern void func_080B257C(u32, u32 *);
extern void func_080067D8(u32, u32 *);
extern void func_08005B18(u32, u8 *);
extern u8 gUnk_0841F6C8[];

void func_080B2538(u32 a, u32 *p) {
    func_080B257C(a, p);
    func_080067D8(p[0], p + 7);
    func_08005B18(p[0], gUnk_0841F6C8);
}
