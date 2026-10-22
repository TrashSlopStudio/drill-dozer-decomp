#include "types.h"
extern void func_080A7D88(u32 a, u32 b);
extern void func_080A7DB0(u32 a, u32 b);
u32 func_080A71E0(u32 unused, u32 *p) {
    if (p[13] == 1) {
        func_080A7D88(p[15], 0);
        func_080A7DB0(p[15], 4);
        p[0] = 5;
    }
    return 0;
}
