#include "types.h"
extern void func_08005560(int);
void func_08025980(int a) {
    u8 *b;
    int *p;
    int i;
    int z;
    b = (u8 *)a + 124;
    z = 0;
    p = (int *)b;
    i = 1;
    do {
        func_08005560(*p);
        *p++ = z;
    } while (--i >= 0);
    *(u16 *)(b + 22) = 0;
}
