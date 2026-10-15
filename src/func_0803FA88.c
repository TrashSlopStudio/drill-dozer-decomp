#include "types.h"

extern u8 *func_08040168(u32);
extern void func_080066B8(u32, u32);
extern void func_08005560(u8 *);
extern void func_0804016C(u32);

void func_0803FA88(u32 a) {
    u8 *p = *(u8 **)(func_08040168(a) + 0x6C);
    func_080066B8(*(u16 *)(p + 0x10), *(u16 *)(p + 0x12));
    func_08005560(p);
    func_0804016C(a);
}
