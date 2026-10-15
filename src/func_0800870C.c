#include "types.h"

extern void func_080F86FC(void *, void *, u32);
extern u8 gUnk_020239D8[];

void func_0800870C(u16 v, u32 a) {
    u16 t = v;
    func_080F86FC(&t, gUnk_020239D8 + (a << 11), 0x01000400);
}
