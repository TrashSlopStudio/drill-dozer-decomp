#include "types.h"

extern void func_08099CBC(u8 *p, u32 v);

void func_08099B90(u8 *p) {
    if (++p[0x73] > 0x3c) {
        func_08099CBC(p, 0);
    }
}
