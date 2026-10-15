#include "types.h"

extern int func_0801CAFC(int, int);

int func_080280D4(int a, int b) {
    int r = func_0801CAFC(a, b + 16);
    if (r == 1)
        *((u8 *)a + 0x76) = r;
    return 1;
}
