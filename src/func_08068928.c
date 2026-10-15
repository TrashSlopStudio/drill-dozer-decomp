#include "types.h"

struct E {
    u32 a;
    u32 b;
};

extern struct E gUnk_08339550[];

u32 func_08068928(u32 *p) {
    if (gUnk_08339550[p[1]].a != 0 && p[7] != 0)
        return 1;
    return 0;
}
