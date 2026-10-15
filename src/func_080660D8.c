#include "types.h"
extern int func_08000960(u32);
extern int *func_0800098C(void);
extern void func_08066080(void);
int func_080660D8(void) {
    if (func_08000960((u32)func_08066080)) {
        int v = func_0800098C()[1];
        if (v == 4 || v == 8)
            return 1;
    }
    return 0;
}
