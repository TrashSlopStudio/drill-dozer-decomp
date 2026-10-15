#include "types.h"

extern u32 func_08010BE0(void);
extern void func_08010A64(u32 a, u32 b, u32 c, u32 d);

void func_08040764(void) {
    if (func_08010BE0() == 0)
        func_08010A64(1, 0, 1, 0);
}
