#include "types.h"

extern int func_080562A8(void);
extern int func_080AAE78(int, u8 *, int);

void func_080AAF5C(int a, u8 *b) {
    if (func_080562A8() != 2)
        func_080AAE78(3, b + 0x21, *(int *)(b + 4));
}
