#include "types.h"

extern void func_08001B5C(u32, u32, u8);

void func_08067888(u8 *p, u8 v) {
    p[28] = v;
    func_08001B5C(p[30], 7, p[28]);
}
