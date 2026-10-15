#include "types.h"

extern u32 func_08062700(u32, u32);
extern void func_08056098(u32, u32, u32);

void func_08055E38(u32 a, u32 b) {
    if (func_08062700(a, b))
        func_08056098(a, b, 2);
}
