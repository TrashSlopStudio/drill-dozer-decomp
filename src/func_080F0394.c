#include "types.h"
extern int func_08000960(u32);
extern void func_080F0348(u32);
extern int func_0800098C(void);
int func_080F0394(u32 a) {
    if (func_08000960(0x080F0461) == 0)
        func_080F0348(a);
    return func_0800098C();
}
