#include "types.h"
extern void func_0800B248(u32, u32);
extern u32 func_08001728(u32);
extern void func_0800089C(void (*)(void), u32, u32);
extern void func_080BF1DC(void);
void func_080BF32C(u32 a) {
    u32 *p;
    func_0800B248(a, 0x49);
    p = (u32 *)func_08001728(16);
    func_0800089C(func_080BF1DC, (u32)p, 0x1801);
    *p = a;
}
