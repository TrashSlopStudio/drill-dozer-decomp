#include "types.h"

extern u32 func_0805C434(u8 *);
extern void func_0805C57C(u8 *, u32);

void func_0805BE88(u32 a, u8 *p) {
    if (func_0805C434(p) == 1)
        func_0805C57C(p, 2);
}
