#include "types.h"

extern u32 func_0800B220(u32);
extern u32 func_0800B234(u32, u32);
extern void func_0806F180(u8 *);

void func_0806F1E0(u32 unused, u8 *p) {
    if (func_0800B220(*(u32 *)(p + 4)) != 1 && func_0800B234(*(u32 *)(p + 4), 4) != 1)
        func_0806F180(p);
}
