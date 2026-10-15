#include "types.h"

extern int func_080F8700(int, int);

void func_080B6D4C(int *p, int a, u32 b) {
    p[3] = func_080F8700(a - p[0], b);
    p[2] = a;
    *(s16 *)(p + 4) = b;
}
