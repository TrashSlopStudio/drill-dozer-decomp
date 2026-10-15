#include "types.h"

extern void func_08073284(u32);

void func_0805A454(u8 *p) {
    if (p[6] == 0) {
        func_08073284(*(u32 *)p);
        p[6]++;
    }
}
