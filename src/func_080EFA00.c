#include "types.h"
extern void func_080EF920(void);
extern u32 func_08000960(u32);

u32 func_080EFA00(void) {
    if (func_08000960((u32)func_080EF920) == 0)
        return 0;
    return 1;
}
