#include "types.h"

extern u8 func_08019B88(void);
extern void func_08064B10(u32);

u32 func_0806476C(u32 a) {
    if (func_08019B88() == 0)
        func_08064B10(a);
    return 0;
}
