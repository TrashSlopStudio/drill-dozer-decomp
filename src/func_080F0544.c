#include "types.h"

extern u32 func_08000960(u32);
extern u8 *func_0800098C(void);
extern void func_080F05D8(void);
extern u8 gUnk_084DFA6C[];

u8 *func_080F0544(void) {
    u8 *r;

    if (func_08000960((u32)func_080F05D8) != 0)
        r = func_0800098C() + 12;
    else
        r = gUnk_084DFA6C;
    return r;
}
