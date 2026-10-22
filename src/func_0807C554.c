#include "types.h"
extern u32 func_080C38EC(u32, u32);
extern void func_08018E94(u32, u32, u32);
void func_0807C554(u8 a, u8 b) {
    u32 p = (u32)b * 32 + 0x08377B84;
    func_08018E94(p, (u16)func_080C38EC(a, 1), 32);
}
