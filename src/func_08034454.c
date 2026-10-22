#include "types.h"

extern void func_08036308(u8 *p);
extern void func_0803649C(u8 *p, u32 a);
extern void func_08036450(u8 *p, u32 a);

u32 func_08034454(u8 *p) {
    func_08036308(p);
    func_0803649C(p, 0);
    func_08036450(p, 0);
    *(u32 *)(p + 0xc4) = 0;
    *(u32 *)(p + 0x48) = 5;
    return 0;
}
