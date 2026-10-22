#include "types.h"
struct S {
    u8 pad[8];
    u8 f;
    u8 pad2[3];
};
extern struct S gUnk_08227320[];
u32 func_08012A30(s32 a) {
    if (a > 271)
        return 0;
    return gUnk_08227320[a].f;
}
