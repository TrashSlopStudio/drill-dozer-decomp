#include "types.h"

extern void func_0802A0B0(u32);
extern void func_080F780C(void *);
extern u8 gUnk_03006B50[];

void func_08017EA0(u8 *p) {
    func_0802A0B0(*(u16 *)(p + 0x3EC));
    func_080F780C(gUnk_03006B50);
}
