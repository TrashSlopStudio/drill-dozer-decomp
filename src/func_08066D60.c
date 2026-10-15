#include "types.h"

extern u32 func_08000960(u32);
extern u32 func_0800098C(void);
extern void func_080670C8(void);

u32 func_08066D60(void) {
    u32 r;

    if (func_08000960((u32)func_080670C8) != 0)
        r = func_0800098C();
    else
        r = 0;
    return r;
}
