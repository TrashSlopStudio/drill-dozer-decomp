#include "types.h"

struct R {
    u8 pad[32];
    u8 v;
    u8 pad2[3];
};

extern struct R gUnk_0821B314[];

u32 func_08009748(u32 a) {
    if (gUnk_0821B314[a].v == 1)
        return 1;
    return 0;
}
