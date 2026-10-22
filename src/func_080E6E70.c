#include "types.h"
extern int func_080E73F8(int);
int func_080E6E70(int a, int *p) {
    if (--p[2] <= 0) {
        p[2] = 0;
        p[0] = 1;
        if (func_080E73F8(p[7]) == 1)
            p[0] = 3;
    }
    return 0;
}
