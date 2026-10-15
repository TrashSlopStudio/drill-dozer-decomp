#include "types.h"

extern u8 *func_0803EC74(u32);
extern void func_08005560(u32);
extern void func_0803EC78(u32);

void func_080404E8(u32 a) {
    func_08005560(*(u32 *)(func_0803EC74(a) + 68));
    func_0803EC78(a);
}
