#include "types.h"

extern u32 func_0802FD98(u8 *p);
extern void func_0802FF2C(u8 *p, u32 a, u32 b);

void func_08032134(u8 *p, u32 a, u32 b) {
    if (func_0802FD98(p) == 0) {
        *(u32 *)(p + 0x74) = 0;
        func_0802FF2C(p, a, 0);
    } else {
        *(u32 *)(p + 0x48) = b;
    }
}
