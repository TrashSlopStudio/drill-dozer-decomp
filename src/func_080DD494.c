#include "types.h"

extern u32 func_080DD454(u32 a, u8 *b);
extern void func_080832A8(u32 a, u8 *b, u32 c);

u32 func_080DD494(u32 a, u8 *b) {
    if (func_080DD454(a, b) != 0)
        return 0;
    func_080832A8(*(u32 *)(b + 12), b, 0);
    return 1;
}
