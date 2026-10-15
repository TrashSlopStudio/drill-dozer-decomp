#include "types.h"
extern void func_080B9E7C(void);
extern u32 func_08000960(u32);

u32 func_080B9EC0(void) {
    u32 r = func_08000960((u32)func_080B9E7C);
    if (r)
        r = 1;
    return r;
}
