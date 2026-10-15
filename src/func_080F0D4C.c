#include "types.h"

extern void func_080F0C40(u8 *);

u32 func_080F0D4C(u8 *p) {
    *(u32 *)(p + 20) = 16;
    *(u32 *)(p + 24) = 0;
    func_080F0C40(p);
    (*(u32 *)(p + 4))++;
    return 0;
}
