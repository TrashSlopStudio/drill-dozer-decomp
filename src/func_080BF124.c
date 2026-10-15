#include "types.h"
extern void func_080BF14C(void);
extern u32 func_08000960(u32);
extern void func_0800098C(void);
extern void func_08001768(void);
extern void func_0800090C(u32);

void func_080BF124(void) {
    u32 r = func_08000960((u32)func_080BF14C);
    if (r) {
        func_0800098C();
        func_08001768();
        func_0800090C(r);
    }
}
