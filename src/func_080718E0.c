#include "types.h"

extern u32 func_08071568(u32);
extern void func_080715AC(u32);

u32 func_080718E0(u32 a) {
    if (func_08071568(a))
        func_080715AC(a);
    return 0;
}
