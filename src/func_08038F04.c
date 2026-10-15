#include "types.h"

extern void *func_08001728(u32);
extern void *gUnk_02035A6C;

void func_08038F04(void) {
    void **p = &gUnk_02035A6C;
    *p = func_08001728(32);
}
