#include "types.h"

extern void func_0800FCF0(u32, s16 *);

u32 func_08091E84(u8 *p) {
    s16 buf[4];
    s16 *q;
    func_0800FCF0(*(u32 *)(p + 12), q = buf);
    if (*(s16 *)(p + 38) + 47 >= q[1]) {
        return 1;
    }
    return 0;
}
