#include "types.h"

struct S {
    u8 pad[20];
    u16 x;
    u16 y;
};

extern void func_080B06EC(int *);

int func_080B0E2C(int *a) {
    struct S *d = *(struct S **)a[5];
    d->x = ((int *)a[1])[1];
    d->y = ((int *)a[1])[2];
    func_080B06EC(a);
    return 0;
}
