#include "types.h"

extern u8 *func_0801AF20(u32, u32);
extern void func_0804CC84(u32);

void func_0804CBEC(u32 a, u8 *b) {
    u8 *r = func_0801AF20(a, 1);
    *(u8 **)(b + 4) = r;
    r[3] = 127;
    func_0804CC84(a);
}
