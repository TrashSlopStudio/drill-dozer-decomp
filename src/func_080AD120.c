#include "types.h"
extern void func_080ABF00(int a, int b);
int func_080AD120(int *a) {
    (*(u16 *)(a[7] + 36))++;
    if (++a[2] >= 0) {
        a[0] = 13;
        func_080ABF00(((volatile int *)a)[7], 8);
    }
    return 0;
}
