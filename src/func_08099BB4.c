#include "types.h"

extern void func_08099CBC(u8 *, u32);

void func_08099BB4(u8 *p) {
    if (++p[0x73] > 5) {
        func_08099CBC(p, 0);
    }
}
