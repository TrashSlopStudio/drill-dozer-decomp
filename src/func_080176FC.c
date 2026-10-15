#include "types.h"

extern u32 func_08011720(u32);
extern u32 func_080176D8(u32);
extern u32 func_080177A0(u32);

u32 func_080176FC(u32 a) {
    u32 r = func_08011720(a);
    if (func_080176D8(a) != 0)
        return func_080177A0(r) + 1;
    return 0;
}
