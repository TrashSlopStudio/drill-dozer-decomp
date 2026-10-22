#include "types.h"

extern u32 func_080624F4(void);
extern void func_08063B64(u32, u32, u32);
extern void func_0806B524(u32, u32, u32);

void func_0806B0E4(u32 a, u32 b) {
    if (func_080624F4()) {
        func_08063B64(214, 49, 2);
        func_0806B524(a, b, 1);
    }
}
