#include "types.h"
extern s32 func_08048AE8(u32, u8 *, u8, u8);
u32 func_08048B48(u32 a, u8 *b, u8 c, u8 d) {
    if (func_08048AE8(a, b, c, d) == 1) {
        b[1] = 0;
        return 1;
    }
    b[1] = 1;
    return 0;
}
