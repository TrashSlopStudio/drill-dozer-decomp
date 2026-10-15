#include "types.h"

extern int func_08017800(void);
extern void func_08017734(int *);

int func_080839D0(int *a) {
    if (func_08017800() != 0) {
        func_08017734(a);
    }
    a[18] = 2;
    return 1;
}
