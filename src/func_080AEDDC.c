#include "types.h"
void func_08006ABC(u8);
void func_0801B064(void *);
void func_080AEDDC(u8 *p) {
    if (p[9] != 32) {
        func_08006ABC(p[9]);
        p[9] = 32;
    }
    if (*(void **)(p + 16) != 0) {
        func_0801B064(*(void **)(p + 16));
        *(void **)(p + 16) = 0;
    }
}
