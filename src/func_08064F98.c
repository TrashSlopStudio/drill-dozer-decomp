#include "types.h"

extern void func_080EDB80(u32, u32, u32);

void func_08064F98(u8 *p) {
    if (p[55] != 0)
        func_080EDB80(*(u32 *)p, 12, 412);
}
