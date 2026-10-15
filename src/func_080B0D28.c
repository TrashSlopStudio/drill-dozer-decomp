#include "types.h"

extern void func_0800B260(u32, u16);
extern void func_080B06EC(u32 *);

u32 func_080B0D28(u32 *p) {
    func_0800B260(p[0], *(u16 *)(p[1] + 4));
    func_080B06EC(p);
    return 0;
}
