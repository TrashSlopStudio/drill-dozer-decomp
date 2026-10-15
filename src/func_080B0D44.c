#include "types.h"

extern void func_0803044C(int, int, int);
extern void func_080B06EC(int *);

int func_080B0D44(int *a) {
    func_0803044C(a[0], ((int *)a[1])[1], ((int *)a[1])[2]);
    func_080B06EC(a);
    return 0;
}
