#include "types.h"

extern void func_080117BC(u32 a, s16 *b);

u32 func_080E6124(u8 *a, u8 *b) {
    s16 buf[2];
    func_080117BC(*(u32 *)(a + 12), buf);
    if (buf[0] <= *(s16 *)(b + 12)) {
        return 2;
    }
    return 8;
}
