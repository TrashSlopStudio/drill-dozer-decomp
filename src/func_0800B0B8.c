#include "types.h"

extern void func_08000988(u32, void (*)(void));
extern void func_0800B0D8(void);

void func_0800B0B8(u32 a, u8 *b) {
    if (*(u32 *)(b + 312) == 0)
        func_08000988(a, func_0800B0D8);
}
