#include "types.h"

extern void func_080EDB80(u32, u32, u32);

void func_080BE10C(u8 *p) {
    if (p[1] != 0 && p[3] == 0) {
        p[3] = 1;
        func_080EDB80(0, 13, 304);
    }
}
