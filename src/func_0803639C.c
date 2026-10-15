#include "types.h"

extern u8 func_080118A8(u32);
extern u32 func_080304C8(u32);
extern void func_08011720(u32);
extern u32 func_08036374(void);

u32 func_0803639C(u32 a) {
    u32 r;

    if (func_080118A8(a) != 4) {
        r = func_080304C8(a);
    } else {
        func_08011720(a);
        r = func_08036374();
    }
    return r;
}
