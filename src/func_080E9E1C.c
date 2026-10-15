#include "types.h"

u32 func_080E9E1C(u8 *p) {
    if (*(u32 *)(p + 24) == 0xFF00FF) {
        return 1;
    }
    return 0;
}
