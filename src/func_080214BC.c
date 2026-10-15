#include "types.h"

extern int func_0801758C(u8 *);

int func_080214BC(u8 *p) {
    int r = *(int *)(p + 0x234);
    if (r == 2)
        r = func_0801758C(p);
    return r;
}
