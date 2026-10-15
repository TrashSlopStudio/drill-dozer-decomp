#include "types.h"

extern void func_0802140C(u32, u32);
extern void func_08064B10(u8 *);

u32 func_08064274(u8 *a) {
    u32 b = *(u32 *)(*(u8 **)(a + 76) + 4);
    func_0802140C(*(u32 *)(a + 8), b);
    func_08064B10(a);
    return 0;
}
