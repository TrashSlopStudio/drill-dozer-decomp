#include "types.h"

struct S {
    u32 a;
    u32 b;
    u32 c;
    u32 d;
};
extern struct S gUnk_03000900[];

u32 func_08002A8C(u8 i) {
    u32 v = gUnk_03000900[i].b;
    if (v > 0x03008000)
        return 1;
    if (v == 0)
        return 1;
    return 0;
}
