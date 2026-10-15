#include "types.h"

extern void func_08029E54(u32);

u32 func_08029A60(u8 *p) {
    p[0x73] = 30;
    p[0x76] = 6;
    func_08029E54(61);
    return 0;
}
