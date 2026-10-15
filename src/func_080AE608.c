#include "types.h"

extern void func_0801B0B4(u8);
extern void func_080AE788(u8 *, u32, u32);

void func_080AE608(u8 *p, u32 a) {
    func_0801B0B4(p[20]);
    func_080AE788(p, a, 8);
}
