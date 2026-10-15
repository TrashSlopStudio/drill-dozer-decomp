#include "types.h"

extern u32 func_08000960(void (*)(void));
extern u32 func_0800098C(void);
extern void func_080B318C(void);
extern void func_080B3394(u32, u32);

void func_080B2EC8(void) {
    u32 r = func_08000960(func_080B318C);
    if (r)
        func_080B3394(r, func_0800098C());
}
