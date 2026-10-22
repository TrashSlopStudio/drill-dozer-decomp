#include "types.h"
extern void func_0800098C(u32);
extern void func_08005560(void);
extern void func_0800090C(u32);
extern u32 func_08000960(u32);
void func_080BDD34(void) {
    u32 r;
    while ((r = func_08000960(0x080BDD09)) != 0) {
        func_0800098C(r);
        func_08005560();
        func_0800090C(r);
    }
}
