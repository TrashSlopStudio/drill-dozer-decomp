#include "types.h"

extern void func_08019A90(u16 a, u32 b, u8 c, u16 d);

void func_0801998C(u32 a, u32 n, u8 c, u16 *p) {
    while (n != 0) {
        func_08019A90(a, 1, c, *p);
        a++;
        p++;
        n--;
    }
}
