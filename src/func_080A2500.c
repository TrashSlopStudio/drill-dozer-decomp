#include "types.h"

extern u32 func_080A3330(u32);
extern void func_080A330C(u32, u32);

u32 func_080A2500(u32 a, u32 b) {
    if (func_080A3330(b) == 1) {
        func_080A330C(b, 2);
        return 1;
    }
    return 0;
}
