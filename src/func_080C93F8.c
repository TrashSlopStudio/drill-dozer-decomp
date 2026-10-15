#include "types.h"

extern int func_08017800(u8 *);
extern void func_08017884(u8 *, u32);

u32 func_080C93F8(u8 *a) {
    if (func_08017800(a) == 1)
        func_08017884(a, 1);
    *(u32 *)(a + 0x48) = 2;
    return 1;
}
