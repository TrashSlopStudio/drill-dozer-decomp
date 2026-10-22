#include "types.h"

extern u8 *func_080305B8(u8 *);
extern u32 func_080560D8(u8 *);
extern void func_08024D6C(u32 *, u32 *);

u32 func_0802EC24(u8 *a, u32 b, u32 c, u32 d, u32 *out) {
    u32 v;
    u32 r;
    out[0] = 0;
    out[1] = 0;
    v = func_080560D8(func_080305B8(a));
    if (v != 0) {
        func_08024D6C(&v, out);
        r = 1;
    } else {
        r = 0;
    }
    return r;
}
