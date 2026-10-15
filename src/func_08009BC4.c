#include "types.h"
extern void func_080098CC(void);
extern u32 func_08000960(u32);

u32 func_08009BC4(void) {
    u32 r = func_08000960((u32)func_080098CC);
    if (r)
        r = 1;
    return r;
}
