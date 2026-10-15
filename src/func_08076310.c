#include "types.h"

u32 func_08076310(u8 *p) {
    if (p[0xEF] && p[0xF0])
        return 1;
    return 0;
}
