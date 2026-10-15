#include "types.h"

extern void func_08040260(s32 *, u32);
extern void func_0801B1C4(u8 *);

u32 func_0803FFA0(u8 *a, s32 *b) {
    if (--b[12] <= 0) {
        func_08040260(b, 5);
        func_0801B1C4(a);
    }
    return 0;
}
