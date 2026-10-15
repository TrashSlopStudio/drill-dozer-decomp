#include "types.h"

extern u8 *func_080061BC(u32);

void func_08021990(u16 a) {
    *(u16 *)(func_080061BC(0) + 4) = a;
    *(u16 *)(func_080061BC(1) + 4) = a;
    *(u16 *)(func_080061BC(2) + 4) = a;
}
