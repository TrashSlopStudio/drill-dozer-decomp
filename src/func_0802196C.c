#include "types.h"

struct S {
    u32 a;
    u32 b;
};
extern struct S gUnk_08398160[];
extern void func_080061D4(u8 i, struct S *p);

void func_0802196C(u32 a) {
    struct S *p = &gUnk_08398160[a];
    func_080061D4(1, p);
    func_080061D4(2, p);
}
