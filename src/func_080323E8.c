#include "types.h"

extern u8 *func_08011720(u32);
extern void func_08075BC4(u8 *);

void func_080323E8(u32 a, u32 *p) {
    u8 *r = func_08011720(a);
    *(u32 *)(r + 0x160) = p[0];
    *(u32 *)(r + 0x164) = p[1];
    func_08075BC4(r);
}
