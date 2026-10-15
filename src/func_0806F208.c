#include "types.h"
extern void *func_08001728(u32);
extern void *gUnk_02036078;
void func_0806F208(void) {
    void **p = &gUnk_02036078;
    *p = func_08001728(324);
}
