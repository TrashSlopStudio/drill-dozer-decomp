#include "types.h"

extern u32 func_0802FF0C(u8 *);
extern void func_0802FDB4(u8 *);

void func_0803210C(u8 *p) {
    u32 r = func_0802FF0C(p);
    if (r == 1) {
        *(u32 *)(p + 0x74) = r;
        func_0802FDB4(p);
    } else {
        *(u32 *)(p + 0x160) = 0;
        *(u32 *)(p + 0x74) = 0;
    }
}
