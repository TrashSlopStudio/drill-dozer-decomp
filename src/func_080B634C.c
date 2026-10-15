#include "types.h"

u32 func_080B634C(u32 *p) {
    if (p[1] == 0)
        return 1;
    p[1]--;
    return 0;
}
