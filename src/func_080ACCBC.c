#include "types.h"
extern void func_0802FF64(u32, u32);
u32 func_080ACCBC(s32 *p) {
    p[1]++;
    if (p[1] > 89) {
        p[1] = 0;
        p[0]++;
        func_0802FF64(p[4], 32);
    }
    return 0;
}
