#include "types.h"

extern void func_0806D608(u8 *);

void func_0806D9B4(u8 *p) {
    **(u32 **)(p + 0x388) = 0;
    func_0806D608(p);
}
