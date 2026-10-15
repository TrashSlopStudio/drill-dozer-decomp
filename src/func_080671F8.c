#include "types.h"

extern u8 *func_08066D60(void);
extern void func_08063CE8(void);

void func_080671F8(void) {
    u8 *p = func_08066D60();
    if (p != 0 && *(u32 *)(p + 0xC) != 0) {
        *(u32 *)(p + 0xC) = 0;
        func_08063CE8();
    }
}
