#include "types.h"

u32 func_080B6D10(u32 *p) {
    if (p[2] == 0) {
        return 0;
    }
    p[2]--;
    return 1;
}
