#include "types.h"

extern void func_080BC430(void);
extern u32 func_08000960(void (*f)(void));
extern void func_0800098C(u32 a);
extern void func_08005560(void);
extern void func_0800090C(u32 a);

void func_080BC45C(void) {
    u32 r;
    while ((r = func_08000960(func_080BC430)) != 0) {
        func_0800098C(r);
        func_08005560();
        func_0800090C(r);
    }
}
