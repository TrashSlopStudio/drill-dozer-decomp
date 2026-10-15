#include "types.h"

extern u8 gUnk_020347BC[];

u32 func_08011ED4(u32 a, u32 b) {
    if (a == 0xFF)
        return 0;
    return gUnk_020347BC[a] & b;
}
