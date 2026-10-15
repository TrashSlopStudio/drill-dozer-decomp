#include "types.h"

u32 func_08085938(u8 *a, u8 *b) {
    b[30] = 1;
    if (++a[117] > 15) {
        return 3;
    }
    return 6;
}
