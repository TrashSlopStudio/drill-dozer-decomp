#include "types.h"

extern u32 func_08000960(u32);
extern void func_080670C8(void);
extern void func_080097A0(void);
extern void func_0806405C(void);

void func_08067218(void) {
    if (func_08000960((u32)func_080670C8)) {
        func_080097A0();
        func_0806405C();
    }
}
