#include "types.h"

extern void func_08036438(u8 *p);

void func_08036414(u8 *p, u16 a) {
    *(u32 *)(p + 0xB8) = a & 0xFF;
    func_08036438(p);
}
