#include "types.h"

extern u32 func_08067C30(u32, u32, u32, u32);
extern void func_08005BBC(int, int, int);

void func_08067CDC(u32 a, u32 b, u32 c, u32 d, u32 e) {
    if (func_08067C30(a, b, c, e))
        func_08005BBC(b, d, 0);
}
