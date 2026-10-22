#include "types.h"
extern void func_080057F0();
u32 func_080CB9C0(u32 a, u8 *b, u32 c) {
    if (a == *b) {
        return 0;
    }
    func_080057F0(c, 0, 0);
    *b = a;
    return 1;
}
