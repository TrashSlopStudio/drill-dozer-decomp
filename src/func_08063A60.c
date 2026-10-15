#include "types.h"
extern u8 func_0804AB40(u32);
u8 func_08063A60(u32 a, u32 b) {
    u8 x = func_0804AB40(a);
    u8 y = func_0804AB40(b);
    return y < x ? x : y;
}
