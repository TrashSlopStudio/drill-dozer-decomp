#include "types.h"

extern u32 *gUnk_0822EEB0[];
extern u32 *gUnk_0822EEBC[];

u32 func_08017900(u32 a, u32 b, u32 c) {
    if (b == 1)
        return gUnk_0822EEB0[a][c];
    return gUnk_0822EEBC[a][c];
}
