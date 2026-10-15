#include "types.h"
extern void func_0800F9D4(int, int, int, int);
void func_080938D8(int a, int b) {
    int i;
    int p;
    p = b + 56;
    i = 3;
    do {
        func_0800F9D4(*(int *)(a + 12), p, 0, 1);
        p += 4;
    } while (--i >= 0);
}
