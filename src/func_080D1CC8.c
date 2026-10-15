#include "types.h"

extern void func_080067CC(u32, u8 *);
extern void func_08005560(u32);

void func_080D1CC8(u32 a, u8 *p) {
    func_080067CC(*(u32 *)p, p + 20);
    func_08005560(*(u32 *)p);
}
