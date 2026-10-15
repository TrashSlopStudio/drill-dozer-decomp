#include "types.h"

extern void func_08029E54(u32);

u32 func_08027FE0(u8 *p) {
    p[0x73] = 30;
    p[0x76] = 8;
    func_08029E54(61);
    return 1;
}
