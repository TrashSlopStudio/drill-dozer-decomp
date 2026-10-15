#include "types.h"

extern int func_0801CAFC(u8 *, int);

int func_08029AD0(u8 *a, int b) {
    if (func_0801CAFC(a, b + 5) == 1) {
        a[0x76] = 0;
    }
    return 0;
}
