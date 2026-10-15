#include "types.h"

extern void func_080B06EC(u8 *p);

u32 func_080B06FC(u8 *p) {
    *(u32 *)(p + 0x2C) += 1;
    func_080B06EC(p);
    return 0;
}
