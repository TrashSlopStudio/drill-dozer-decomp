#include "types.h"

extern u32 func_080D7C04(u32 a, u32 b);

u32 func_080D803C(u8 *a, u32 *b) {
    u32 v;
    if (*(u32 *)(a + 508) != b[0])
        v = b[1];
    else
        v = b[2];
    return func_080D7C04((u32)a, v);
}
