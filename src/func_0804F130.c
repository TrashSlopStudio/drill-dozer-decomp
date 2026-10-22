#include "types.h"

extern void func_080066B8(u32, u32);
extern void func_08005560(u32);

void func_0804F130(u32 *a) {
    func_080066B8(*(u16 *)(a[1] + 16), 0x40);
    func_080066B8(*(u16 *)(a[2] + 16), 0x40);
    func_08005560(a[1]);
    func_08005560(a[2]);
}
