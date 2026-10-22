#include "types.h"

extern void func_080BEF0C(void);
extern u32 func_08000960(u32);
extern u32 func_0800098C(void);
extern void func_08001768(u32);
extern void func_0800090C(u32);

void func_080BEEE4(void) {
    u32 r = func_08000960((u32)func_080BEF0C);
    if (r != 0) {
        func_08001768(func_0800098C());
        func_0800090C(r);
    }
}
