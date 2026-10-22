#include "types.h"
extern u16 gUnk_08240464[];
extern u8 gUnk_082404D0[];
u8 *func_08022CE8(u32 id) {
    u32 i;
    u16 *p;
    for (i = 0, p = gUnk_08240464; i < 10; i++) {
        if (*p == id) {
            return (u8 *)p;
        }
        p += 6;
    }
    return gUnk_082404D0;
}
