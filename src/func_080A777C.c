#include "types.h"

extern void func_0800F9D4(int, int, int, int);

void func_080A777C(int a, int b, int *c) {
    int i;
    int p;
    p = b + 52;
    i = 3;
    do {
        func_0800F9D4(*(int *)(a + 12), p, *c++, 1);
        p += 4;
    } while (--i >= 0);
}
