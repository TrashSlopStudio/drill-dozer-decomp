#include "types.h"

struct S {
    u32 a, b;
};

u32 func_08024D50(u8 **a, struct S *b) {
    u8 *p = *a;
    if (p == 0) {
        return 0;
    }
    *b = *(struct S *)(p + 60);
    return 1;
}
