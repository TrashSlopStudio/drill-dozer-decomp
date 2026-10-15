#include "types.h"

struct S {
    u8 b[16];
};
extern struct S gUnk_082C2CAC[];

struct S *func_080444A4(u32 a) {
    if (a > 45)
        a = 0;
    return &gUnk_082C2CAC[a];
}
