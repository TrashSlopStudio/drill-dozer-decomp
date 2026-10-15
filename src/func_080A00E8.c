#include "types.h"

extern u32 func_080486FC(void);
extern void func_0800090C(u32);

void func_080A00E8(u32 a) {
    if (func_080486FC() == 0)
        func_0800090C(a);
}
