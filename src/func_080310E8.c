#include "types.h"

extern void func_080310A0(u8 *);

void func_080310E8(u8 *p, u32 v) {
    func_080310A0(p);
    *(u32 *)(p + 0x20C) = v;
}
