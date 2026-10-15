#include "types.h"
extern void func_080067CC(void *, void *);
extern void func_0807E98C(void *);

void func_080E6F58(u8 *p) {
    u8 *q = p + 0x7C;
    if (*(int *)(q + 24) == 0) {
        *(int *)(q + 64) = (*(u8 **)(q + 68))[1];
        func_080067CC(*(void **)(q + 68), p + 0xC8);
        func_0807E98C(*(void **)(q + 68));
    }
}
