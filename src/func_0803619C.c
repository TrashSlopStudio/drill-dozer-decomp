#include "types.h"

u32 func_0803619C(u32 x) {
    u32 n;
    x >>= 14;
    n = 0;
    while ((x & 1) == 0) {
        n++;
        x >>= 1;
    }
    return n;
}
