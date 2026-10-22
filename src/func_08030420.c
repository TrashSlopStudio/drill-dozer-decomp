#include "types.h"
extern u8 *func_08011720(void);
void func_08030420(u32 a, u32 b, u32 c) {
    u8 *p = func_08011720();
    *(u16 *)(p + 0x172) += b;
    *(u16 *)(p + 0x176) += c;
}
