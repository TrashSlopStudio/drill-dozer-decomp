#include "types.h"

extern int gUnk_084CCBB8[];
extern int func_080F8FBC(int, int *, int);

void func_080EB0A0(int a) {
    int *p = (int *)(a + 0x7c);
    while (func_080F8FBC(a, p, gUnk_084CCBB8[*p]) == 1)
        ;
}
