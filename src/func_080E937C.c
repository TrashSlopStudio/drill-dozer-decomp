#include "types.h"

extern u32 func_0806B864(void);

u32 func_080E937C(u32 *p) {
    if (func_0806B864() == 1)
        return 0;
    p[6] = 0;
    p[0]++;
    return 1;
}
