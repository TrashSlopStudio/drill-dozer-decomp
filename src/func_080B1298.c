#include "types.h"

extern void func_080B1400(void);
extern u32 func_08000960(void (*)(void));
extern void func_080B06EC(u32);

u32 func_080B1298(u32 p) {
    if (func_08000960(func_080B1400) == 0)
        func_080B06EC(p);
    return 0;
}
