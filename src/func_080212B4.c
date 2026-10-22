#include "types.h"

extern void func_080FAA68(void *, u32, u32);

u8 func_080212B4(u16 a) {
    u8 buf[3];
    func_080FAA68(buf, 0x0823E305, 3);
    if (a == 3) {
        a = 0;
    }
    return buf[(s16)a];
}
