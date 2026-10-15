#include "types.h"

extern u8 *func_0803D578(void);
extern void func_0803D79C(void);

void func_0803A84C(void) {
    u8 *p = func_0803D578();
    func_0803D79C();
    *(u32 *)(p + 0x44) = 0x400;
    *(u32 *)(p + 0x48) = 0x400;
    *(u32 *)(p + 0x4C) = 0x400;
}
