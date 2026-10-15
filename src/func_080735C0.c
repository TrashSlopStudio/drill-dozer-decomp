#include "types.h"

extern void func_080066B8(u32, u32);
extern void func_08005560(u8 *);

void func_080735C0(u8 *p) {
    func_080066B8(*(u16 *)(p + 0x10), 32);
    func_08005560(p);
}
