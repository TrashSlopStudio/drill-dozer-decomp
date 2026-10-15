#include "types.h"

extern u32 func_08056294(u8 *, u8 *);

u32 func_080B242C(u8 *p) {
    if (func_08056294(p, p + 60) != 0)
        return 1;
    return 0;
}
