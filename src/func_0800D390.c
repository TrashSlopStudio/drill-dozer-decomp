#include "types.h"

extern void func_0800D268(void);
extern u32 func_0800CFF8(u32, u32, u32, u32, u32 *);

u32 func_0800D390(u32 a, u32 b, u32 c) {
    u32 buf[2];
    return func_0800CFF8(a, b, c, (u32)func_0800D268, buf);
}
