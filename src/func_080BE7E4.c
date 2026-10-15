#include "types.h"

u32 func_080BE7E4(u32 *p) {
    if (p[2] == 0)
        return 1;
    p[2]--;
    return 0;
}
