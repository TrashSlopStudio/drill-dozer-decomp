#include "types.h"

extern u8 *func_0803EC74(void);
extern void func_0803ED00(void);
extern void func_0803ECE8(u32);

void func_0803E9B8(void) {
    u8 *p = func_0803EC74();
    func_0803ED00();
    func_0803ECE8(*(u32 *)(p + 0x44));
}
