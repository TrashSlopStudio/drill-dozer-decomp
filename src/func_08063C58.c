#include "types.h"

extern u8 gUnk_08237144[];
extern u16 func_080C38EC(u8, u32);
extern void func_08018E94(void *, u16, u32);

void func_08063C58(u32 a) {
    u8 *p = gUnk_08237144;
    func_08018E94(p, func_080C38EC(a, 1), 32);
}
