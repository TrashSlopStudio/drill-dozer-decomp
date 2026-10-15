#include "types.h"

extern void func_080BEF74(u8 *);
extern void func_080EDB80(u32, u32, u32);

void func_080BEF28(u8 *p) {
    func_080BEF74(p);
    if (p[2] != 0) {
        p[3] = 1;
        func_080EDB80(0, 15, 320);
    }
}
