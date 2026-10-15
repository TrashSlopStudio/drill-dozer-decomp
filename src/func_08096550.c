#include "types.h"

extern u32 func_08096D9C(u8 *);
extern void func_08096F20(u8 *, u32);

u32 func_08096550(u8 *a, u8 *b) {
    if (func_08096D9C(b) == 1)
        func_08096F20(b, 2);
    return 1;
}
