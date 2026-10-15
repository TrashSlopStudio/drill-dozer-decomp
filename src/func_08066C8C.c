#include "types.h"
extern void func_08066C00(void);
extern u32 func_08000960(u32);
extern u32 func_0800098C(void);

u32 func_08066C8C(void) {
    if (func_08000960((u32)func_08066C00) == 0)
        return 0;
    return func_0800098C();
}
