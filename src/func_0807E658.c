#include "types.h"

typedef void (*Fn)(u8 *, u8 *);

void func_0807E658(u8 *p) {
    Fn f = *(Fn *)(p + 0xB8);

    if (f)
        f(p, p + 40);
}
