#include "types.h"

extern void func_0807EADC(u32 a, u32 b);
extern void func_08005BBC(u32 a, u32 b, u32 c);
extern void func_0807E4B4(u32 a);

void func_0807F6F0(u32 a, u32 *b) {
    func_0807EADC(a, b[2]);
    func_08005BBC(b[2], b[5], 0);
    if (((u8 *)b[2])[14] == 1)
        func_0807E4B4(a);
}
