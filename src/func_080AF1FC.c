#include "types.h"

u32 func_080AF1FC(u8 *p) {
    if (p[0x77] != 0) {
        if (p[0x73] > 44)
            return 1;
        p[0x73]++;
    }
    return 0;
}
