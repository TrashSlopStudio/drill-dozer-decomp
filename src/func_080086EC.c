#include "types.h"

extern void func_080F86FC(void *, void *, u32);
extern u8 gUnk_020239D8[];

void func_080086EC(u16 a) {
    u16 v = a;
    func_080F86FC(&v, gUnk_020239D8, 0x01001000);
}
