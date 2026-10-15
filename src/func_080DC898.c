#include "types.h"

struct S48 {
    u32 w[12];
};

extern void func_080DC9A0(struct S48 *);

void func_080DC898(u32 a, u8 *p) {
    *(struct S48 *)(p + 8) = **(struct S48 **)(p + 4);
    func_080DC9A0(*(struct S48 **)(p + 4));
}
