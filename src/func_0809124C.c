#include "types.h"

extern u32 gUnk_083C4090[];
extern u32 gUnk_083C40A0[];

u32 func_0809124C(u32 a, u32 *p) {
    if (p[0] == 0) {
        return gUnk_083C4090[p[1]];
    }
    return gUnk_083C40A0[p[1]];
}
