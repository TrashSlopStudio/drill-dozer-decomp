#include "types.h"

extern u32 func_08082B1C(void *, u8 *);
extern void func_080832A8(u32, u8 *, u32);

u32 func_08082B5C(void *a, u8 *b) {
    if (func_08082B1C(a, b) != 0) {
        return 0;
    }
    func_080832A8(*(u32 *)(b + 12), b, 0);
    return 1;
}
