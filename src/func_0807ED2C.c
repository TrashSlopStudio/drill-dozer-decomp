#include "types.h"

extern int *func_0807E630(int *);
extern void func_08011728(int *, int *, int *);

void func_0807ED2C(int *p) {
    int d;
    int *r = func_0807E630(p);
    func_08011728(r, p + 4, p + 5);
    p[5] -= 10;
    d = 20;
    if (p[6] == 3) {
        d = -d;
    }
    p[4] += d;
}
