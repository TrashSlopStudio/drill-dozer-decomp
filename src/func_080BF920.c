#include "types.h"

extern u32 func_0803DB0C(u32);
extern void func_080BF48C(u32 *, u32);

u32 func_080BF920(u32 *p) {
    if (func_0803DB0C(p[30]) == 1) {
        p[0] = 15;
        func_080BF48C(p, 1);
    }
    return 0;
}
