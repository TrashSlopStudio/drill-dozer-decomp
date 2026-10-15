#include "types.h"

struct S {
    u32 a;
    u32 b;
    u32 c;
};

extern struct S gUnk_02023848[];
extern void func_08006214(u8);

void func_08006848(u8 i, struct S *s) {
    gUnk_02023848[i] = *s;
    func_08006214(i);
}
