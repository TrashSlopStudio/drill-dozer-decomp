#include "types.h"

extern void func_080EDB80(u32, u32, u32);

void func_080BA814(u8 *p) {
    if (p[2] != 0 && p[7] == 0) {
        p[7] = 1;
        func_080EDB80(0, 13, 604);
    }
}
