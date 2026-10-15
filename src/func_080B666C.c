#include "types.h"
extern void func_08006ABC(u32 a);
extern void func_08005560(void *a);
void func_080B666C(u8 *a) {
    if (*(u16 *)(a + 0x18) != 0) {
        func_08006ABC(((u32)(*(u8 *)(*(int *)(a + 0x1C) + 0x23) << 26)) >> 27);
        func_08005560(*(void **)(a + 0x1C));
    }
}
