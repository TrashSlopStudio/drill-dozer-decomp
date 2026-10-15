#include "types.h"
extern void func_08029E54(u32);
u32 func_080581E0(u8 *p) {
    p[0x73] = 45;
    p[0x76] = 11;
    func_08029E54(61);
    return 1;
}
