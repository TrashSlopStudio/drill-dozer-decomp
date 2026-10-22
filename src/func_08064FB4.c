#include "types.h"

extern u8 *func_08002DD0(void);

u32 func_08064FB4(u8 *p) {
    u8 *r = func_08002DD0();
    if (p[0x37] != 0 && (*(u16 *)(r + 6) & 8) != 0) {
        return 1;
    }
    return 0;
}
