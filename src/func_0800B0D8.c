#include "types.h"

extern u8 func_08019B88(void);
extern void func_0800A87C(u32, u32);
extern void func_0800090C(u32);

void func_0800B0D8(u32 a, u32 b) {
    if (func_08019B88() == 0) {
        func_0800A87C(b, 2);
        func_0800090C(a);
    }
}
