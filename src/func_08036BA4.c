#include "types.h"

extern int func_08017800(int);
extern void func_08017884(int, int);

int func_08036BA4(int a) {
    if (func_08017800(a)) {
        func_08017884(a, 1);
    }
    *(int *)(a + 72) = 6;
    return 1;
}
