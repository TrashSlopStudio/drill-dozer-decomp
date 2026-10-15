#include "types.h"

extern u32 func_08073D78(u32, u32);
extern u32 func_08073CB8(u32, u32);

u32 func_08073DAC(u32 a, u32 b) {
    if (func_08073D78(a, b) == 0)
        return func_08073CB8(a, b);
    return 0;
}
