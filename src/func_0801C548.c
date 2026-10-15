#include "types.h"

extern int func_0801C49C(int);
extern int func_0801C50C(int);

int func_0801C548(int a) {
    if (func_0801C49C(a) == 1 || func_0801C50C(a) == 1)
        return 1;
    return 0;
}
