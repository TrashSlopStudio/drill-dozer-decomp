#include "types.h"

extern void func_08011A1C(u8 *, u32);

void func_08038044(u8 *p) {
    *(u16 *)(p + 0x14C) = 0;
    *(u16 *)(p + 0x14E) = 0;
    func_08011A1C(p, 3);
}
