#include "types.h"
extern u32 *func_08001728(u32);
extern void func_0800089C(u32, u32 *, u32);
void func_080EAE18(u32 a) {
    u32 *p = func_08001728(8);
    *p = a;
    func_0800089C(0x080EAE3D, p, 0x5806);
}
