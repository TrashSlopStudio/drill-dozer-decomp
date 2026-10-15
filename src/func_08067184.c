#include "types.h"

extern u8 *func_08066D60(void);

void func_08067184(u32 a) {
    u8 *p = func_08066D60();
    *(u32 *)(p + 28) = a;
    *(u32 *)(p + 32) = 0;
    *(u32 *)(p + 36) = 0;
}
