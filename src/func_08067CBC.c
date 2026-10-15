#include "types.h"

extern u32 func_08067C30(u32, u32, u32, u32);
extern void func_08005814(u32, u32);

void func_08067CBC(u32 a, u32 b, u32 c, u32 d, u32 e) {
    if (func_08067C30(a, b, c, e) != 0) {
        func_08005814(b, d);
    }
}
