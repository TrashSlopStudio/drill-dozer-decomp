#include "types.h"

extern u8 gUnk_0844784C[];
extern void func_080C0E00(u32, s16, s16, u8 *);
extern void func_080C1774(u32);

void func_080BE6EC(u32 a, s16 b, s16 c) {
    func_080C0E00(a, b, c, gUnk_0844784C);
    func_080C1774(a);
}
