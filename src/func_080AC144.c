#include "types.h"

int func_080AC144(int *p) {
    if (++p[1] > 29) {
        p[1] = 0;
        p[0] = 2;
    }
    return 0;
}
