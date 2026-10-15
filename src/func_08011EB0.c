#include "types.h"

extern u8 gUnk_020347BC[];

u32 func_08011EB0(u8 a) {
    if (a == 0xFF)
        return 0;
    return gUnk_020347BC[a] & 3;
}
