#include "types.h"
struct S {
    u32 a;
    u32 b;
    u32 c[3];
};
extern struct S gUnk_083E75CC[];
u32 func_080995C4(u16 i) {
    struct S *p = gUnk_083E75CC;
    return p[i].b;
}
