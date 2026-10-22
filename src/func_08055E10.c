#include "types.h"

extern s32 func_080624F4(void);
extern void func_08063B64(u32 a, u32 b, u32 c);
extern void func_08056098(u32 a, u32 b, u32 c);

void func_08055E10(u32 a, u32 b) {
    if (func_080624F4()) {
        func_08063B64(0xCE, 0x31, 2);
        func_08056098(a, b, 1);
    }
}
