#include "types.h"

void func_0804A4BC(u8 *a, u8 b) {
    void (*f)(u32, u8) = *(void (**)(u32, u8))(a + 4);
    if (f != 0)
        f(*(u32 *)(*(u8 **)a + (*(u16 *)(a + 24) + *(u16 *)(a + 26)) * 8 + 4), b);
}
