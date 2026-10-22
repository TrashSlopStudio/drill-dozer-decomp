#include "types.h"

extern void func_080E1C80(u32);
extern u32 func_0800D79C(u32, u32, u32);
extern void func_08008748(u32, u8 *);

void func_080E1C54(u8 *p) {
    if (p[29] != 0) {
        p[29] = 0;
        func_080E1C80(*(u32 *)p);
        func_08008748(func_0800D79C(*(u32 *)p, 3, 2), p + 40);
    }
}
