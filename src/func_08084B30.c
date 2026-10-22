#include "types.h"

extern u8 func_0802A03C(void);
extern void func_08029E54(u32);

u32 func_08084B30(u32 a, s8 *b) {
    if (b[30] != 3) {
        if (func_0802A03C() == 0) {
            func_08029E54(0x11D);
        }
        return 1;
    }
    return 3;
}
