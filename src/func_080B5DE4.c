#include "types.h"

u32 func_080B5DE4(u32 *p) {
    if (p[1] == 0)
        return 0;
    p[1]--;
    return 1;
}
