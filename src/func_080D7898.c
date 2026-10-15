#include "types.h"

void func_080D7898(u8 *a, int v) {
    u8 **p;
    int i;
    a += 124;
    a[8] = v;
    p = (u8 **)a;
    i = 1;
    do {
        (*p++)[3] = v;
    } while (--i >= 0);
}
