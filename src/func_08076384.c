#include "types.h"

extern u8 func_0800DE38(u32, u32);
extern void func_08029E54(u16);

u32 func_08076384(u32 a, u32 b, u32 c) {
    if (func_0800DE38(a, b) == 1) {
        func_08029E54(c);
        return 1;
    }
    return 0;
}
