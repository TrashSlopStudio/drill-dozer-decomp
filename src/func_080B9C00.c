#include "types.h"

extern int func_080F8700(int, int);

void func_080B9C00(int *p, s16 b, u16 c) {
    p[1] = b << 8;
    p[2] = func_080F8700(p[1] - p[0], c);
    *(u16 *)(p + 3) = c;
}
