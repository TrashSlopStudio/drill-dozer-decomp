#include "types.h"

u32 func_080EEF00(u8 *p) {
    if (p[22] == 1) {
        p[22] = 0;
        return 5;
    }
    return 9;
}
