#include "types.h"
extern s32 func_08044FBC(u8 *);
u32 func_080B427C(u32 a, u8 **b) {
    if (func_08044FBC(*b + 0x80) > 67)
        return 1;
    return 0;
}
