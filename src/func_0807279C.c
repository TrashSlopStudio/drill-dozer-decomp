#include "types.h"

extern void func_080EDB80(u32, u32, u32);
extern void func_080EDBE8(u32);

void func_0807279C(u8 *p) {
    if (p[29]) {
        func_080EDB80(*(u32 *)p, 12, 164);
        func_080EDBE8(0);
    }
}
