#include "types.h"

extern void func_08011988(int *a, int b, int c);
extern void func_08017C24(int a, int b);

int func_080831AC(int *p) {
    func_08011988(p, 1, 0);
    func_08017C24(p[12], 3);
    p[29] = 0;
    return p[18] = 1;
}
