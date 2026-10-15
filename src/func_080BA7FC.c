#include "types.h"
extern void func_080BA798(void);
extern u32 func_08000960(u32);

u32 func_080BA7FC(void) {
    u32 r = func_08000960((u32)func_080BA798);
    if (r)
        r = 1;
    return r;
}
