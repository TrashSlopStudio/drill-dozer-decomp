#include "types.h"

extern u32 func_080B021C(u32);
extern void func_08005814(u32, u32);

void func_080B0200(u32 a, u32 b, u32 c, u32 d) {
    if (func_080B021C(a) != 0) {
        func_08005814(b, d);
    }
}
