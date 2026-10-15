#include "types.h"

void func_08020824(u8 *p) {
    void (*f)(u8 *) = *(void (**)(u8 *))(p + 0x370);
    if (f)
        f(p);
}
