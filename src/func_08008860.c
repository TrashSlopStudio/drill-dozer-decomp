#include "types.h"

extern void func_08007A98(u8 *, u16, u8);

void func_08008860(u8 *p, u16 b, u8 c) {
    func_08007A98(p, b, c);
    if (*(u8 **)(p + 0x40) != 0)
        func_08007A98(*(u8 **)(p + 0x40), b, c);
}
