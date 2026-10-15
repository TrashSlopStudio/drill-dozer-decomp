#include "types.h"

extern void func_080F0C40(u8 *);

u32 func_080F0D2C(u8 *p) {
    *(u32 *)(p + 20) = 0;
    *(u32 *)(p + 24) = 16;
    func_080F0C40(p);
    (*(u32 *)(p + 4))++;
    return 0;
}
