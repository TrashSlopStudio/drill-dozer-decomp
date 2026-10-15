#include "types.h"

extern void func_080715AC(u8 *);

u32 func_080718C0(u8 *p) {
    if (++*(s32 *)(p + 0x34) > 15) {
        *(s32 *)(p + 0x34) = 0;
        func_080715AC(p);
    }
    return 0;
}
