#include "types.h"
extern u32 func_0800B220(u32);
extern u32 func_0800B234(u32, u32);
extern void func_0805D660(u8 *);

void func_0805D7F8(u32 x, u8 *p) {
    if (func_0800B220(*(u32 *)(p + 0x1C)) != 1 && func_0800B234(*(u32 *)(p + 0x1C), 16) != 1)
        func_0805D660(p);
}
