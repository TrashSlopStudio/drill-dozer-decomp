#include "types.h"

extern u32 func_080627A0(u32);
extern void func_08063C80(u32);
extern void func_080B06EC(u8 *);

u32 func_080B0C5C(u8 *p) {
    if (func_080627A0(*(u32 *)(*(u8 **)(p + 4) + 4))) {
        func_08063C80(1);
        func_080B06EC(p);
    }
    return 0;
}
