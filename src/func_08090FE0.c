#include "types.h"

extern void func_0801BF48(u8 *, int);
extern void func_0809110C(int);

void func_08090FE0(u8 *p) {
    int *s = (int *)(p + 0x7c);
    u8 *d = p + 0x88;
    int i;
    for (i = 2; i >= 0; i--) {
        func_0801BF48(d, *s);
        func_0809110C(*s++);
        d += 8;
    }
}
