#include "types.h"

extern u32 func_08013AE4(u32, s16 *);
extern u32 func_080138A0(u32, u32, u32, s16);

u32 func_08013BB4(u32 a, u32 b, u32 c) {
    s16 t;
    u32 r = func_08013AE4(c, &t);
    return func_080138A0(a, b, r, t);
}
