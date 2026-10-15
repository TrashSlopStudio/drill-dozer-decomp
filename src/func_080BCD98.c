#include "types.h"

extern void func_080EDB80(u32, u32, u32);

void func_080BCD98(u8 *p) {
    if (p[2] && !p[3]) {
        p[3] = 1;
        func_080EDB80(0, 15, 800);
    }
}
