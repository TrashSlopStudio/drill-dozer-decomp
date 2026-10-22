#include "types.h"

extern void func_08093768(u32);
extern void func_08093A1C(u32, u32 *);

u32 func_08093720(u32 a, u32 *b) {
    func_08093768(a);
    func_08093A1C(a, b);
    if (*(u8 *)(b[9] + 14) == 1)
        b[0] = 8;
    return 0;
}
