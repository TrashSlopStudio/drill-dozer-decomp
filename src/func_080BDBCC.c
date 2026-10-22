#include "types.h"

extern u32 func_0800B3F4(u32 *);
extern u32 func_0801B298(u32, u32, u32, u32, u32);
extern void func_080B2BC4(u32);

void func_080BDBCC(u32 *p) {
    *p = func_0801B298(func_0800B3F4(p), 218, 0, 136, 88);
    if (*p != 0) {
        func_080B2BC4(1);
    }
}
