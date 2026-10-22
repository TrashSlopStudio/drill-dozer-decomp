#include "types.h"

extern void func_08029E54(u16 a);

u32 func_08076338(u32 a, u32 b, u8 *c) {
    u32 r;
    if (*c) {
        (*c)--;
        r = 0;
    } else {
        func_08029E54(a);
        *c = b;
        r = 1;
    }
    return r;
}
