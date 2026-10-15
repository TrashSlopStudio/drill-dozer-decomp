#include "types.h"

extern void func_080ABF0C(u32, u32);
extern void func_080B06EC(u8 *);

u32 func_080B11CC(u8 *p) {
    func_080ABF0C(**(u32 **)(p + 12), *(u32 *)(*(u8 **)(p + 4) + 4));
    func_080B06EC(p);
    return 0;
}
