#include "types.h"

extern u8 func_0800DFC8(u32, s16, s16);
extern void func_08029E54(u16);

u32 func_080763D4(u32 a, s16 b, s16 c, u32 d) {
    if (func_0800DFC8(a, b, c) == 1) {
        func_08029E54(d);
        return 1;
    }
    return 0;
}
